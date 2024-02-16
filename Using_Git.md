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
To add files you use ```git add```, followed by the filename.<br />
<br />
To add every single file/change you can use ```git add .```<br />
<br />
You use ```git status``` to check what you have added/not added.<br />
<br />
To let the computer know you're about to push changes, you ```git commit -m "SaveName"```.<br />
SaveName can be anything you want. Finally, you ```git push``` to save the changes.
