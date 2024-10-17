  
## BASICS
WORKSPACE
REPOSITORY - staging area and commit history
git --version
git config --global user.name
git config --global user.email

git init

git status

git add <fname>   // to add file to staging area (INCLUDE)
git reset HEAD <fname>  // to remove file from staging area (EXCLUDE)

git commit -m "abc"

*************************************************************************************
## Branches

git branch <NewBranchName>
git checkout <branchName>

or git branch -b <newBranchName>

__logs
git log
git branch 
*

commits are snapshot of the workspace
branches are nothing but pointer to commit

Master branch is default branch and pointing to latest commit
HEAD is a reference, pointing to current working branch

when you switch branches, context or snapshot uour workspace chnages

*****************************************************************************************
## Merging branches--

git merge <branchName>
git branch -d <branchName>

_logs
git log --all

1) Fast forward merge

2) 3 way merge : actually makes merge commit
	
3) if merger conflict 
		<<<<<Head
		__filecontent___
		=================
		__filecontent___
		>>>>>feature3
		
	-> fix merge conficts manually.
	1)git add .
	2)git commit
	
	NOTE : if anycase if u want to stop user
	git merge --abort
	
***********************************************************************************************
## GitHub

git init vs git clone

1) Adding remote repository to LOCAL
	git remote add origin url
	
2) Pushing to remote repository or updating a remote repository
	git push origin master
	
Note : remote branches are not automatically updated, u need to push manually

***************************************************************************************
## Github Coworker

git clone url <directoryName>

Fetch and be upto date with Server

1) git fetch <origin> 
2) a) git log vs git log --remotes
	if there is any difference, then merge and move to origin\master branch 
   b) git merge <origin\master>
// now u will be in sync with server
	
NOTE: master is default branch in LOCAL
	  origin\master is default brnach in Remote webhost
	  
***Working at same in same branch*********
git pull origin master or (git fetch and git merge origin\master)
	  
********************************************************************************************************************************
## Exercise Notes
1) Create repo in webhost
2) setup local
	1) git init and git remote add origin <url>
					OR
		git clone <url> <directoryName>
	2) git branch -M main
	3) git push -u origin main
	   git log --all --remotes 
3) Take latest or sync upto date
	1) git fetch origin 
		OPT : git pull origin main
	2) git merge origin/main
				OR
	   git rebase origin/main // if you have check-ins
