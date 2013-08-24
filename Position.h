

float Get_Position(float distance, float degrees, float movement)

{

	float Y;

	float X;

	float sin_cos;

	while(1==1) // repeat forever

	{


		Y = 0;

		X = 0;

		sin_cos = 0;


		nMotorEncoder[motorB] = 0;

		if(movement == 2)  // if robot is moving

		{

			while(movement == 2) // while robot is moving

			{

				distance = nMotorEncoder[motorB];  // puts degrees from motor B in distance


			}

		}


		else if(movement == 1)   // if robot is stopped

		{

			sin_cos = sin(degrees);       //  get the sin from the numbers of degrees turned

			X = sin_cos * distance;      // multiply the sin by the number of distance travled and put it in the X variable

			sin_cos = 0;                // set the sin_cos variable to zero

			sin_cos = cos(degrees);    // get the cos from the numbers of degrees turned

			Y = sin_cos * distance;   //  multiply the cos by the number of distance travled and put it in the Y variable



		}






	}

}
