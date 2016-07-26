#include "average.h"

Average::Average() {
	
	leftSonarAverage = 0;
	leftSonarSum = 0;
	leftSonarIndex = 0;

	leftMiddleSonarAverage = 0;
	leftMiddleSonarSum = 0;
	leftMiddleSonarIndex = 0;

	rightMiddleSonarAverage = 0;
	rightMiddleSonarSum = 0;
	rightMiddleSonarIndex = 0;

	rightSonarAverage = 0;
	rightSonarSum = 0;
	rightSonarIndex = 0;

	closestDistance = 0;
}


/*************************fillArray() **************************
* This is called at start up to fill the arrays with values.
* Only called once, does not return anything
*/

void Average::fillArrays() {

	int position = 0;

	while(position < 5) {

		leftSonar[position] = //live reading
		leftMiddleSonar[position] = //live reading
		rightMiddleSonar[position] = //live reading
		rightSonar[position] = //live reading

	position++;

	} // end while
} 

/*************************updateAverages()****************
* Called after all the averages have been initially filled.
* sum is the current sum of the numbers in the array
* Updates the array with a new value.
*/
void Average::updateAverages()	{
//	int livereading = ??? left sonar
	
	//math that needs to happen?
	
	leftSonarSum = leftSonarSum - leftSonar[leftSonarIndex];

	leftSonar[leftSonarIndex] = livereading;

	leftSonarSum = leftSonarSum + leftSonar[leftSonarIndex];

	leftSonarAverage = leftSonarSum / ARRAY_LENGTH;

	leftSonarIndex++;

	if(leftSonarIndex == ARRAY_LENGTH)
		leftSonarIndex = 0;

	
//	livereading = ??? left sonar
	
	//math that needs to happen?
	
	leftMiddleSonarSum = leftMiddleSonarSum - leftMiddleSonar[leftMiddleSonarIndex];

	leftMiddleSonar[leftMiddleSonarIndex] = livereading;

	leftMiddleSonarSum = leftMiddleSonarSum + leftMiddleSonar[leftMiddleSonarIndex];

	leftMiddleSonarAverage = leftMiddleSonarSum / ARRAY_LENGTH;

	leftMiddleSonarIndex++;

	if(leftMiddleSonarIndex == ARRAY_LENGTH)
		leftMiddleSonarIndex = 0;

//	livereading = ??? left sonar
	
	//math that needs to happen?
	
	rightMiddleSonarSum = rightMiddleSonarSum - rightMiddleSonar[rightMiddleSonarIndex];

	rightMiddleSonar[rightMiddleSonarIndex] = livereading;

	rightMiddleSonarSum = rightMiddleSonarSum + rightMiddleSonar[rightMiddleSonarIndex];

	rightMiddleSonarAverage = rightMiddleSonarSum / ARRAY_LENGTH;

	rightMiddleSonarIndex ++;

	if(rightMiddleSonarIndex == ARRAY_LENGTH)
		rightMiddleSonarIndex = 0;

\
//	livereading = ??? left sonar
	
	//math that needs to happen?
	
	rightSonarSum = rightSonarSum - rightSonar[rightSonarIndex];

	rightSonar[rightSonarIndex] = livereading;

	rightSonarSum = rightSonarSum + rightSonar[rightSonarIndex];

	rightSonarAverage = rightSonarSum / ARRAY_LENGTH;

	rightSonarIndex ++;

	if(rightSonarIndex == ARRAY_LENGTH)
		rightSonarIndex = 0;

}

/******************************setClosestDistance()*******************
* Compares the averages, and sets the closest distance
*
*
*/
void Average::setClosestDistance() {

	if(leftSonarAverage < leftMiddleSonarAverage) {
		closestDistance = leftSonarAverage;
		closestDistancePosition = LEFT;
	}
	else if(leftMiddleSonarAverage < rightMiddleSonarAverage) {
		closestDistance = leftMiddleSonarAverage;
		closestDistancePosition = LEFTMIDDLE;
	}

	else if(rightMiddleSonarAverage < rightSonarAverage) {
		closestDistance = rightMiddleSonarAverage;
		closestDistancePosition = RIGHTMIDDLE;
	}

	
	else if(rightSonarAverage < rightMiddleSonarAverage) {
		closestDistance = rightSonarAverage;
		closestDistancePosition = RIGHT;
	}
}

/**********************************returnCD()******************************
* Returns the value of the closest distance.
*
*/
int Average::returnCD() {
	return closestDistance;	
}

/***********************************returnPosition()*********************
* Returns the value of which position is the closest
*/
int Average::returnPosition() {
	return closestDistancePosition;
}


