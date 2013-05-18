/** @brief  I2C_Conv.h -break up and reconstitute vars into Bytes for sending over I2C
	
	Copyright 2013 NanoSatisfi, Inc.

   Licensed under the Apache License, Version 2.0 (the "License");
   you may not use this file except in compliance with the License.
   You may obtain a copy of the License at

       http://www.apache.org/licenses/LICENSE-2.0

   Unless required by applicable law or agreed to in writing, software
   distributed under the License is distributed on an "AS IS" BASIS,
   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
   See the License for the specific language governing permissions and
   limitations under the License.
	
    @author Peter Platzer and Jeroen Cappaert
    @date August 2012
*/

#include <Arduino.h>
#include "I2C_Conv.h"

//--------------------------------------------------
// Split float into  byte array with 4 elements
//--------------------------------------------------
int Float2Byte(float usrData, byte usrBytes[])
  {
    //usrBytes is passed by reference, as all arrays are
    //usrData is a container for the results
    //the next line creates an pointer array (as indicated by byte * dataPtr
    //getting the pointers from the reference of usrData,
    byte * dataPtr = (byte *) &usrData;
    unsigned int i;
    for (i = 0; i < sizeof usrData; i++) {
      usrBytes[i] = dataPtr[i];
    }
  
    return 0; //No error return    
  }
  
  
//--------------------------------------------------
// Reconstitute a float from an array of 4 bytes
//--------------------------------------------------
int Byte2Float(float& resultValue, byte usrBytes[])
  {
    //resultValue is passed by reference
    //the next line creats pointers to the 4 bytes of resultValue
    //the loop then writes the values from usrBytes
    //into the positions of the pointers
    byte * resultPtr = (byte*) &resultValue;
    unsigned int i;
    for (i = 0; i < sizeof resultValue; i++)
          //*p++ is equivalent to *(p++); 
          //it increments p, and then returns 
          //the value which p pointed to before p was incremented.
          *resultPtr++ = usrBytes[i];
    return 0; //No error return
  }



//--------------------------------------------------
// Split integer into byte array with 2 elements
//--------------------------------------------------
int Int2Byte(int usrData, byte usrBytes[])
  {
    //usrBytes is passed by reference, as all arrays are
    //usrData is a container for the results
    //the next line creates an pointer array (as indicated by byte * dataPtr
    //getting the pointers from the reference of usrData,
    byte * dataPtr = (byte *) &usrData;
    unsigned int i;
    for (i = 0; i < sizeof usrData; i++) {
      usrBytes[i] = dataPtr[i];
    }    
    return 0; //No error return    
  }

//--------------------------------------------------
// Reconstitute an int from an array of 2 bytes
//--------------------------------------------------
int Byte2Int(int& resultValue, byte usrBytes[])
  {
    //resultValue is passed by reference
    //the next line creats pointers to the 4 bytes of resultValue
    //the loop then writes the values from usrBytes
    //into the positions of the pointers
    byte * resultPtr = (byte*) &resultValue;
    unsigned int i;
    for (i = 0; i < sizeof resultValue; i++)
          //*p++ is equivalent to *(p++); 
          //it increments p, and then returns 
          //the value which p pointed to before p was incremented.
          *resultPtr++ = usrBytes[i];
    return 0; //No error return
  }
  
  
  //--------------------------------------------------
// Split a long into byte array with 4 elements
//--------------------------------------------------
int Long2Byte(long usrData, byte usrBytes[])
  {
    //usrBytes is passed by reference, as all arrays are
    //usrData is a container for the results
    //the next line creates an pointer array (as indicated by byte * dataPtr
    //getting the pointers from the reference of usrData,
    byte * dataPtr = (byte *) &usrData;
    unsigned int i;
    for (i = 0; i < sizeof usrData; i++) {
      usrBytes[i] = dataPtr[i];
    }
    return 0; //No error return    
  }

//--------------------------------------------------
// Reconstitute a long from an array of 2 bytes
//--------------------------------------------------
int Byte2Long(long& resultValue, byte usrBytes[])
  {
    //resultValue is passed by reference
    //the next line creats pointers to the 4 bytes of resultValue
    //the loop then writes the values from usrBytes
    //into the positions of the pointers
    byte * resultPtr = (byte*) &resultValue;
    unsigned int i;
    for (i = 0; i < sizeof resultValue; i++)
          //*p++ is equivalent to *(p++); 
          //it increments p, and then returns 
          //the value which p pointed to before p was incremented.
          *resultPtr++ = usrBytes[i];
    return 0; //No error return
  }
  
  


