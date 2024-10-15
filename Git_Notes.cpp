  
--BASICS--
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
--Branches--

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

when yu switch branches, context or snapshot uour workspace chnages

*****************************************************************************************

--Merging branches--

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
GitHub

git init vs git clone

1) Adding remote repository to LOCAL
	git remote add origin url
	
2) Pushing to remote repository or updating a remote repository
	git push origin master
	
***************************************************************************************
github Coworker

git clone url <directoryName>

     

		
	






