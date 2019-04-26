**1. List all of the main states a process may be in at any point in time on a standard Unix system. Briefly explain what each of these states means.**
- Running: Meaning it's currently running.
- Waiting: Meaning it's waiting to be triggered in some way.
- Stopped: Process has been stopped through an exit.
- Zombie: Process has been stopped but there's still a record of it in the process table(top).


**2. What is a zombie process?**
It's a process that's been killed but because the parent has never seen the exit status, the zombie process stays in the system memory.

**3. How does a zombie process get created? How does one get destroyed?**
A zombie process is one that's parent process has failed to execute wait(), which would read the zombie process exit status, then the zombie process would be removed from memory and never become a zombie process.


**4. What are some of the benefits of working in a compiled language versus a non-compiled language? More specifically, what benefits are there to be had from taking the extra time to compile our code?**
I feel like the main benefit would be readability. You can still figure out what a `c` program is doing fairly easy but when you compare it to something like python, you really see just how readable some compiled langaguages can be. I also feel like you're sacrificing hand-holding vs power when it comes to compiled langagues but I'm not sure how much of that is just me being unfamilair with the new language.