# Adjusting to using Git

Git can take a minute to wrap your head around but once you do

To use the git commands you'll need an ssh key - one of the first instructional videos will cover making one.
<br />
> If you run into the issue where you suddenly can't/"don't have permission to" git clone anymore, create a new ssh-key and save it on your intra settings. To save you time here are the commands you'll need:
> ```
> ssh-keygen
> ```
> ```
> cat ~/.ssh/id_rsa.pub
> ```

### Basic Git Commands:
To add files you use ```git add```, followed by the filename. To add every single file/change you can use ```git add .```
You use ```git status``` to check what you have added/not added.
To let the computer know you're about to push changes, you ```git commit -m "SaveName"```. SaveName can be anything you want. Finally, you ```git push``` to save the changes.

### Masters, Branches etc.

This isn't too relevant, outside of maybe the rush projects, but it doesn't hurt to learn!


