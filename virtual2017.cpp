/*


EVERY LINE OF CODES IT TELLING A STORY ABOUT THIS COMPETITION.

__________                   
\____    /___________  ____  
  /     // __ \_  __ \/  _ \ 
 /     /\  ___/|  | \(  <_> )
/_______ \___  >__|   \____/ 
        \/   \/              
__________      ___.           __  .__               
\______   \ ____\_ |__   _____/  |_|__| ____   ______
 |       _//  _ \| __ \ /  _ \   __\  |/ ___\ /  ___/
 |    |   (  <_> ) \_\ (  <_> )  | |  \  \___ \___ \ 
 |____|_  /\____/|___  /\____/|__| |__|\___  >____  >
        \/           \/                    \/     \/ 
  ___ ___ .__       .__        _________      .__                  .__   
 /   |   \|__| ____ |  |__    /   _____/ ____ |  |__   ____   ____ |  |  
/    ~    \  |/ ___\|  |  \   \_____  \_/ ___\|  |  \ /  _ \ /  _ \|  |  
\    Y    /  / /_/  >   Y  \  /        \  \___|   Y  (  <_> |  <_> )  |__
 \___|_  /|__\___  /|___|  / /_______  /\___  >___|  /\____/ \____/|____/
       \/   /_____/      \/          \/     \/     \/                    
___________                                                      __   
\__    ___/___  __ _________  ____ _____    _____   ____   _____/  |_ 
  |    | /  _ \|  |  \_  __ \/    \\__  \  /     \_/ __ \ /    \   __\
  |    |(  <_> )  |  /|  | \/   |  \/ __ \|  Y Y  \  ___/|   |  \  |  
  |____| \____/|____/ |__|  |___|  (____  /__|_|  /\___  >___|  /__|  
                                 \/     \/      \/     \/     \/      
_______________  _____________ 
\_____  \   _  \/_   \______  \
 /  ____/  /_\  \|   |   /    /
/       \  \_/   \   |  /    / 
\_______ \_____  /___| /____/  
        \/     \/              


  _________        .____                                                 .___
 /   _____/ ____   |    |    ____   ____    ____      _____    ____    __| _/
 \_____  \ /  _ \  |    |   /  _ \ /    \  / ___\     \__  \  /    \  / __ | 
 /        (  <_> ) |    |__(  <_> )   |  \/ /_/  >     / __ \|   |  \/ /_/ | 
/_______  /\____/  |_______ \____/|___|  /\___  /  /\ (____  /___|  /\____ | 
        \/                 \/          \//_____/   )/      \/     \/      \/ 
___________.__                   __               _____             
\__    ___/|  |__ _____    ____ |  | __  ______ _/ ____\___________ 
  |    |   |  |  \\__  \  /    \|  |/ / /  ___/ \   __\/  _ \_  __ \
  |    |   |   Y  \/ __ \|   |  \    <  \___ \   |  | (  <_> )  | \/
  |____|   |___|  (____  /___|  /__|_ \/____  >  |__|  \____/|__|   
                \/     \/     \/     \/     \/                      
   _____  .__  .__      __  .__             ___________.__       .__     
  /  _  \ |  | |  |   _/  |_|  |__   ____   \_   _____/|__| _____|  |__  
 /  /_\  \|  | |  |   \   __\  |  \_/ __ \   |    __)  |  |/  ___/  |  \ 
/    |    \  |_|  |__  |  | |   Y  \  ___/   |     \   |  |\___ \|   Y  \
\____|__  /____/____/  |__| |___|  /\___  >  \___  /   |__/____  >___|  /
        \/                       \/     \/       \/            \/     \/ 


Life-SPHERES 2017 vAll-1.1-Virtual

*/
#define BUGMODE 0
#define DRILLS  3
//#define TROLLING 0

short   step,
        color,
        //amplitude,
        locations,
        counter;
int     square[3],
        mySquare[3];
float   //Speed,
        //RotationRate,
        myState[12],
        //otherState[12],
        pos[3],
        //DropAttitudeTarget[3],
        //DrillAttitudeTarget[4],
        //Quaternions[4],
        zeroVector[3],
        //GeyserAvoidance[3],
        tmpVector[3],
        Face[3],
        Forces[3],
        base;
        //forceToBase[3];
        //distance;
bool    //GeyserOn,
        //hitGeyser;
        //firstquat;
        Geyser;
 


// ###########################################################################################################################################################################

void init() {
	api.getMyZRState(myState);
	color = (myState[0] < 0) ? -1 : 1;
	for (short i=0; i<3; i++)
	    counter = locations = /*DropAttitudeTarget[i] = DrillAttitudeTarget[i+1] =*/ zeroVector[i] /*= GeyserAvoidance[i]*/ = 0;
	//DropAttitudeTarget[2] = -1;
	//Quaternions[0] = 0;
	//Quaternions[1] = 0;
	//Quaternions[2] = 0;
	//Quaternions[3] = 0;
	//DrillAttitudeTarget[3] = 0.0f;
	//amplitude = 0;
	step = 1;
	//distance = 10.0f;
	//forceToBase[2]=0;
	//Forces[2] = 0.000f;
	//GeyserOn= hitGeyser = /*firstquat =*/ false;
	
	//if (color == 1)
	    //Quaternions[1] = 1;
    //else
        //Quaternions[0] = 1;
        
    Geyser = false;
        
    DEBUG(("Life-SPHERES 2017 vAll-1.1-Virtual"));
    DEBUG(("Greetings from the Administrator, DLEMTT-10098-IT"));
}

// ###########################################################################################################################################################################

void loop() {
    //forceToBase[0]=1.750f;
    //forceToBase[1]=-1.750f;
    
    //Forces[0] = 1.750f;
    //Forces[1] = -1.750f;
    
	//#if BUGMODE
	//DEBUG(("Step %d", step));
    //DEBUG(("Amplitude %d", amplitude));
    //#endif
    
    //DEBUG(("Location %i - Quaternion 0 = %f - Quaternion 1 = %f - Quaternion 2 = %f - Quaternion 3 = %f", locations, Quaternions[0], Quaternions[1], Quaternions[2], Quaternions[3]));
    //DEBUG(("Location %i", locations));
    //DEBUG(("Pos %f", pos[2]));
	
	api.getMyZRState(myState);
	//api.getOtherZRState(otherState);
	
	game.pos2square(myState, mySquare);
	
	//if  (game.getDrillError())
        //game.stopDrill();
        
    if (api.getTime() == 180)
        DEBUG(("Take a look to our website - https://sites.google.com/view/iisgiulionatta-zerorobotics"));

	//if (game.isGeyserHere(myState) == true)
	    //Geyser();
	
	//DEBUG((" POS %f %f %f", pos[0], pos[1], pos[2]));
	//DEBUG(("MYSQUARE %i %i", mySquare[0], mySquare[1]));
	//DEBUG(("SQUARE %i %i", square[0], square[1]));
	
	
	//counter++;
	//if (mathVecMagnitude(otherState, 3) > 0.24f)
	    //counter = 0;
	
	//if ((api.getTime() >= 162 || game.getFuelRemaining() <= 0.10f) && game.getNumSamplesHeld() >= 1) {
	    //game.stopDrill();
	    //step = 4;
	    
	//}

	/*if (game.getNumSamplesHeld() == 5  && step != 4) {
	    
	    if (game.getDrills(mySquare) < DRILLS)
	        game.dropSample(4);
	    else {
	        step = 4;
	        //DEBUG(("*** DELIVERY STARTED ***"));
	        Dropping();
	    }
	}*/
	
	
        
	
    //#if BUGMODE    
    //DEBUG(("COUNTER %i", counter));
	//#endif
	
	switch(step) {
	    
	    case 1:
	    
	        LocationChoosing();
	        break;
	        //DEBUG(("A learning experience is one of those things that say, You know that thing you just did? Don't do that."));
	    case 2:
	        
	        Go();
            //DEBUG(("I rarely end up where I was intending to go, but often I end up somewhere I needed to be."));
	        break;
	        
	    case 3:
	    	        
	        Drilling();
	        //DEBUG(("It can hardly be a coincidence that no language on Earth has ever produced the expression As pretty as an airport."));
	        break;
	        
	    case 4:
	    
	        Dropping();
	        //DEBUG(("You will need to know the difference between Friday and a fried egg. It's quite a simple difference, but an important one"));
	        break;
        	
        	/*#if TROLLING
	    case 5:

	        Trolling();
	        DEBUG(("If you try and take a cat apart to see how it works, the first thing you have on your hands is a nonworking cat"));
	        break;
	    
	        #endif*/
	    
	    /*    
	    case 6:
	    
	        MatchEnding();
	        break;
	    */
	}
	
}

// ###########################################################################################################################################################################

void LocationChoosing() {
    int   tempSquare[2];
    float tmpDist;
    float distance = 10.0f;
    
    	
    for (short x=-8; x<=8; x=x+1) {
        
        for (short y=-10; y<=10; y=y+1) {
                
            tempSquare[0] = x*color;
            tempSquare[1] = y*color;
            game.square2pos(tempSquare, pos);
            pos[2] = 0.27f;
                
            mathVecSubtract(tmpVector, pos, myState, 3);
            tmpDist = mathVecMagnitude(tmpVector, 3);
            mathVecSubtract(tmpVector, zeroVector, pos, 3);
            tmpDist += mathVecMagnitude(tmpVector, 3);
                if  (game.getTerrainHeight(tempSquare) == 0.40f && game.getDrills(tempSquare) == 0 && (tempSquare[0] != mySquare[0] || tempSquare[1] != mySquare[1]) && !game.isGeyserHere(tempSquare) && 
                    tmpDist < distance && (tempSquare[0] < -2 || tempSquare[0] > 2 || tempSquare[1] < -2 || tempSquare[1] > 2)) {
                       
           
                        square[0] = tempSquare[0];
                        square[1] = tempSquare[1];
                    
                        distance = tmpDist;
                         
                }
            
        }
            
    }
    
    //DEBUG(("*** POSITION IDENTIFIED ***"));
    
    if (step != 3) {
        
        step = 2;
        Go();
        
    }
    
    //DEBUG(("*** POSITION IDENTIFIED ***"));
    
        /*if(GeyserOn==false){
            //if (game.getNumSamplesHeld() >= 4){
            if (locations == 2){
                step=4;
                //DEBUG(("*** DELIVERY STARTED ***"));
                Dropping();
            }
            else{
                step++;
            }
        }
        GeyserOn=false;*/
}


// ###########################################################################################################################################################################

void Go() {
    
    Face[0] = myState[6];
    Face[1] = myState[7];
    Face[2] = 0.000f;
    mathVecNormalize(Face, 3);
    
    //if(firstquat){
    //api.setQuatTarget(DrillAttitudeTarget);
        
    //}
    
    //firstquat=true;
    
    //if (locations == 0)
        //api.setQuatTarget(Quaternions);
        
    //if (locations == 0)
        api.setAttitudeTarget(Face);
        //DEBUG(("*** ALIGNMENT ***"));
    
    game.square2pos(square, pos);
    pos[2] = 0.260f;
    game.pos2square(pos, square);
    
    
    if (game.getDrillEnabled()) {
        game.stopDrill();
        //DEBUG(("*** DRILLING STOPPED ***"));
    }
    
    api.setAttRateTarget(zeroVector);
    //DEBUG(("*** ROTATION STOPPED ***"));
    
    if (mySquare[0] == square[0] && mySquare[1] == square[1] && myState[2] > 0.25f && myState[2] < 0.29f) {
        
        MoveTo(pos);
        //DEBUG(("*** POSITION SET ***"));
        //DEBUG(("*** READY TO DRILL ***"));
        step = 3;
        Drilling();
        
    }
    
    else
        MoveTo(pos);
            //DEBUG(("*** MOVEMENT TO THE NEXT POSITION ***"));
    
}

// ###########################################################################################################################################################################

void Drilling() {
    
    //LocationChoosing();
    
    game.square2pos(square, pos);
    //pos[2] = 0.270f;
    
    /*if (locations != 2) {
        
        if (square[0] < mySquare[0])
            pos[0] = pos[0] - 0.03f;
        else if (square [0] > mySquare[0])
            pos[0] = pos[0] + 0.03f;
            
        if (square[1] < mySquare[1])
            pos[1] = pos[1] - 0.03f;
        else if (square[1] > mySquare[1])
            pos[1] = pos[1] + 0.03f;
        
    }*/
        
    /*for (short i=0; i++; i<2) {
        
        if (square[i] < mySquare[i])
            pos[i] = pos[i] - 0.03f;
        else if (square [i] > mySquare[i])
            pos[i] = pos[i] + 0.03f;
        
    }*/
    
    pos[2] = 0.260f;
    MoveTo(pos);
    //DEBUG(("*** POSITION SET ***"));
    
    float axis[3];
    axis[0] = 0.000f;
    axis[1] = 0.000f;
    axis[2] = 1.000f;
    
    //float spin[3];
    //spin[0] = myState[9];
    //spin[1] = myState[10];
    //spin[2] = myState[11];
    
    //mathVecScale(spin, spin, 0.250f, true);
    
    mathVecCross(tmpVector, myState+6, axis);
    mathVecNormalize(tmpVector, 3);
    
    //Speed = mathVecMagnitude(myState+3, 3);
    //RotationRate =  mathVecMagnitude(myState+9, 3);
    
    
    
    if (game.getDrillEnabled() == false) {
        
        if (mathVecMagnitude(myState+3, 3) < 0.010f && mathVecMagnitude(myState+9, 3) < 0.040f && myState[2] > 0.250f && myState[2] < 0.290f && myState[8] > -0.125f && myState[8] < 0.125f && game.getDrills(square) < DRILLS && square[0] == mySquare[0] && square[1] == mySquare[1]) {
               
            game.startDrill();
            //DEBUG(("*** DRILLING STARTED ***"));
            //counter = 0;
            api.setAttitudeTarget(tmpVector);
            //DEBUG(("*** ROTATION IN PROGRESS ***"));
            locations++;
                
        } 
        
        else {
            
            MoveTo(pos);
            
            api.setAttRateTarget(zeroVector);
            //DEBUG(("*** ROTATION STOPPED ***"));
            api.setAttitudeTarget(Face);
            //DEBUG(("*** ALIGNMENT ***"));
            //api.setQuatTarget(Quaternions);
            //api.setPositionTarget(pos);
            
        }
        
    } 
    
    else {
        
        api.setAttitudeTarget(tmpVector);
        //api.setTorques(tmpVector);
        MoveTo(pos);
        //MoveTo(pos);
        
        //if (api.getTime()%2 == 0)
            //api.setAttRateTarget(spin);
        //DEBUG(("*** ROTATION IN PROGRESS ***"));
            
        if (game.checkSample() == true)
            game.pickupSample();
            
            /*if (game.getDrills(square) >= DRILLS) {
                //game.stopDrill();
                //DEBUG(("Drilling stopped"));
                //api.setAttRateTarget(zeroVector);
                //DEBUG(("Rotation stopped"));
                step = 1;
                LocationChoosing();
                Go();
            }*/
    }
    
    if (game.getDrillError()) {
        game.stopDrill();
        //DEBUG(("*** DRILLING STOPPED ***"));
        locations--;
        //api.setQuatTarget(Quaternions);
        api.setAttRateTarget(zeroVector);
        //DEBUG(("*** ROTATION STOPPED ***"));
        api.setAttitudeTarget(Face);
        //DEBUG(("*** ALIGNMENT ***"));
    }
    
    if (game.isGeyserHere(myState) == true)
        Geyser = true;
        
    if (game.getNumSamplesHeld() == 5 && game.getDrills(mySquare) < DRILLS)
        game.dropSample(4);
        
    if (game.isGeyserHere(mySquare) || game.getDrills(myState) == DRILLS) {
        
        if (locations == 1 || locations == 3) {
            
            step = 2;
            LocationChoosing();
            //Go();
            
        }
        
        else if (((locations == 2 || locations == 4) && game.getNumSamplesHeld() >= 3) || locations == 5) {
            
            step = 4;
            
            if (Geyser == true)
                base = 0.240f;
            else
                base = 0.300f;
            
            Dropping();
            
        }
        
        else if (game.getNumSamplesHeld() < 3) {
            
            locations--;
            step = 2; 
            LocationChoosing();
            
        }
        
    }
    
}

// ###########################################################################################################################################################################

void Dropping() {
                    
    //game.stopDrill();
    
    //DEBUG(("VECTOR %f", base));
    
    Face[0] = 0.000f;
    Face[1] = 0.000f;
    Face[2] = -1.000f;
    
    if (game.getDrillEnabled()) {
        game.stopDrill();
        //DEBUG(("*** DRILLING STOPPED ***"));
    }
    
    api.setAttRateTarget(zeroVector);
    //DEBUG(("*** ROTATION STOPPED ***"));
    
    api.setAttitudeTarget(Face);
    

    
    mathVecScale(tmpVector, myState, base, true);
    MoveTo(tmpVector);
    
    //DEBUG(("*** DELIVERY IN PROGRESS ***"));
    
    /*
    if  (mathVecMagnitude(myState, 3) < 0.200f) {
        
        api.setPositionTarget(myState);
        
    } else {
        
        MoveTo(zeroVector);
    
    }
    */
    
    if (game.atBaseStation() == true) {
        
        for (int i=0; i<5; i++)
            game.dropSample(i);
            //locations = 0;
            //hitGeyser = false;
           
            /*#if TROLLING
       
        if (api.getTime()>150) {
            
            step = 5;
            
        }
        
        else 
            
            #endif*/
            
            step = 2;
            //DEBUG(("*** DELIVERY COMPLETED ***"));
            LocationChoosing();
            //Go();
            
        
        
    }
    
}

// ###########################################################################################################################################################################
/*
void MatchEnding() {
    
    if (game.getNumSamplesHeld() == 0) {
        
        game.stopDrill();
        api.setAttRateTarget(zeroVector);
        
        MoveTo(zeroVector);
        
    }
    
    else {
        
        Dropping();
        
    }
    
}*/

// ###########################################################################################################################################################################
/*#if TROLLING
void Trolling() {
    
    if (api.getTime()>150) {
        
        mathVecScale(tmpVector, otherState, 0.3f, true);
        MoveTo(tmpVector);
        
    }
    
    else {

        step = 1;
        
    }
    
}
#endif*/
// ###########################################################################################################################################################################

void mathVecScale(float *res, float *src, float mag, bool norm) {
    memcpy(res, src, sizeof(float)*3);
    if (norm) mathVecNormalize(res, 3);
	res[POS_X] *= mag;
	res[POS_Y] *= mag;
	res[POS_Z] *= mag;
}

// ###########################################################################################################################################################################

void MoveTo(float item[3]) {
    
    //DEBUG(("MOVING"));
    
    mathVecSubtract(tmpVector, item, myState, 3);
    if (mathVecMagnitude(tmpVector, 3) > 0.110f) {
        mathVecScale(tmpVector, tmpVector, 0.035f, true);
        api.setVelocityTarget(tmpVector);
        //DEBUG(("*** VELOCITY SET ***"));
    } else {
        api.setPositionTarget(item);
        //DEBUG(("*** POSITION SET ***"));
    }
    
    if (Geyser == true) {
            
        if (counter < 3 && step == 2) {
                
            api.setForces(item);
            //DEBUG(("FORCE DRILL"));
            counter++;
                
        }
        
        else if (counter < 3 && step == 4) {
            
            Forces[0] = 0.200f;
            Forces[1] = -0.200f;
            Forces[2] = 0.000f;
	        
    	    if (mySquare[0] > 0) 
    	        Forces[0] = -0.200f;    //0.175 or 0.247, that value is 0.175xsqrt(2)
    	        
    	        //forceToBase[0]=-1.750f; //0.175 or 0.247, that value is 0.175xsqrt(2)
    	    
    	    if (mySquare[1] < 0)
    	        Forces[1] = 0.200f;     //0.175 or 0.247, that value is 0.175xsqrt(2)
    	        
    	        //forceToBase[1]=1.750f; //0.175 or 0.247, that value is 0.175xsqrt(2)
    	        
            api.setForces(Forces);
            //api.setForces(item);
            //DEBUG(("FORCE DROP"));
            counter++;
            
        }
            
        else if ((counter < 10 || myState[2] < 0.200f) && step == 2) {
                
            api.setVelocityTarget(tmpVector);
            //DEBUG(("VELOCITY"));
            counter++;
            
        }
            
        else {
            
            Geyser = false;
            counter = 0;
            
        }
        
    }
    
    //if (game.isGeyserHere(myState))
        //api.setForces(Forces);
    
    /*if(hitGeyser && game.isGeyserHere(myState) == false && locations == 1 && myState[2] < 0.200f){
	    //game.square2pos(square, Forces);
	    //Forces[0] = 0.000f;
	    //Forces[1] = 0.000f;
	    //Forces[2] = 0.200f;
    	//mathVecSubtract(Forces, Forces, myState, 3);
	    //GeyserAvoidance[2] = 2.0f;
	    //if (myState[2] >= 0.230f)
	        //hitGeyser = false;
	    //api.setForces(Forces);
	    //counter++;
	    api.setVelocityTarget(tmpVector);
	    DEBUG(("*** FORCE APPLIED - go down ***"));
	}*/
    
}

//void Geyser() {
    
    
    //step = 1;
	    
	    
	    //game.stopDrill();
	    //DEBUG(("Drilling stopped"));
	    //api.setAttRateTarget(zeroVector);
	    //DEBUG(("Rotation stopped"));
	    //GeyserOn=true;
    	//LocationChoosing();
    	
    	
    	// se devo consegnare ? non serve LocationChoosing
        
        /*
        game.square2pos(square, pos);
        mathVecNormalize(pos, 2);
        mathVecScale(tmpVector, pos, 2.0f, true);
        */
        /* 
        if (square[0] > mySquare[0])
            GeyserAvoidance[0] = 1.5f;
    	else if (square[0] < mySquare[0])
            GeyserAvoidance[0] = -1.5f;
    	    
    	if (square[1] > mySquare[1])
    	    GeyserAvoidance[1] = 1.5f;
    	else if (square[1] < mySquare[1])
    	    GeyserAvoidance[1] = -1.5f;
    	*/
    	//game.square2pos(square, Forces);
    	//Forces[2] = 0;                                      // ?? forces doesn't work on z axis if hit by a geyser
    	
    	/* 
    	api.setForces(tmpVector);
    	*/
    	
	    //if (game.getNumSamplesHeld() < 4 && api.getTime() < 150) {
	    /*if (locations != 2){
	        api.setForces(Forces);
	        hitGeyser = true;
	        //DEBUG(("*** FORCE APPLIED - DRILLING ***"));
	        step = 1;
	        LocationChoosing();
	        Go();
	        
	    }*/
	    
	    /*else {
	        
	        Forces[0] = 1.750f;
            Forces[1] = -1.750f;
	        
    	    if(mySquare[0]>0){
    	        //forceToBase[0]=-1.750f; //0.175 or 0.247, that value is 0.175xsqrt(2)
    	        Forces[0] = -1.750f; //0.175 or 0.247, that value is 0.175xsqrt(2)
    	    }
    	    if(mySquare[1]<0){
    	        //forceToBase[1]=1.750f; //0.175 or 0.247, that value is 0.175xsqrt(2)
    	        Forces[1] = 1.750f; //0.175 or 0.247, that value is 0.175xsqrt(2)
    	        
    	    }
    	    api.setForces(Forces);
    	    //DEBUG(("*** FORCE APPLIED - DROPPING ***"));
    	    step = 4;
    	    //DEBUG(("*** DELIVERY STARTED ***"));
    	    hitGeyser = true;
    	    Dropping();
	        
	    } */
	    
	    
    
//}