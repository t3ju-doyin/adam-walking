# adam-walking
Here is the pseudocode for the code
START
Open the file
Set file variable = openRead("C:pathToFile/file.txt")
Declare counter = 0
Declare a test case variable 
While reading file
	remove whitespace in text file
	if counter >=1
		Declare successCount = 0
		Declare letter = 0
		for letter < length of a test case
			if letter == U
				successCount = successCount +1
			else
				break iteration
		END-FOR
		print successCount 
	END-IF
	counter = counter+ 1
	END_WHILE

	close the file
END
