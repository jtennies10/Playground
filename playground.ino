#include "beta-cube-library.h" 
#include "L3D_CubePixel.h" 
#include <math.h> 

//Cube cube = Cube(6,50);
Cube cube(6,50);

void setup() {
   cube.begin();
   }

void loop() {
//       Color voxelColor;
//    for(int x=0;x<cube.size;x++)
//        for(int y=0;y<cube.size;y++)
//            for(int z=0;z<cube.size;z++)
//            {
//                voxelColor=cube.getVoxel(x,y,z);
//                if(voxelColor.red>0)
//                    voxelColor.red--;
//                if(voxelColor.green>0)
//                     voxelColor.green--;
//                if(voxelColor.blue>0)
//                    voxelColor.blue--;
//                cube.setVoxel(x,y,z, voxelColor);  
//           //     delayMicroseconds(100); 
//            }  

        Color voxelColor(255, 0, 0);
        cube.setVoxel(0,0,0, voxelColor); //back bottom left
        cube.setVoxel(5,0,0, voxelColor); //back bottom right
        cube.setVoxel(0,0,5, voxelColor); //back top left
        cube.setVoxel(5,0,5, voxelColor); //back top right
        cube.setVoxel(0,5,0, voxelColor); //front bottom left
        cube.setVoxel(5,5,0, voxelColor); //front bottom right
        cube.setVoxel(0,5,5, voxelColor); //front top left
        cube.setVoxel(5,5,5, voxelColor); //front top right
        cube.show();
        delay(100);

        Color voxelColorTwo(0, 255, 0);
        cube.setVoxel(0,0,0, voxelColorTwo); //back bottom left
        cube.setVoxel(5,0,0, voxelColorTwo); //back bottom right
        cube.setVoxel(0,0,5, voxelColorTwo); //back top left
        cube.setVoxel(5,0,5, voxelColorTwo); //back top right
        cube.setVoxel(0,5,0, voxelColorTwo); //front bottom left
        cube.setVoxel(5,5,0, voxelColorTwo); //front bottom right
        cube.setVoxel(0,5,5, voxelColorTwo); //front top left
        cube.setVoxel(5,5,5, voxelColorTwo); //front top right
        cube.show();
         delay(100);

        Color voxelColorThree(0,0,255);
        cube.setVoxel(0,0,0, voxelColorThree); //back bottom left
        cube.setVoxel(5,0,0, voxelColorThree); //back bottom right
        cube.setVoxel(0,0,5, voxelColorThree); //back top left
        cube.setVoxel(5,0,5, voxelColorThree); //back top right
        cube.setVoxel(0,5,0, voxelColorThree); //front bottom left
        cube.setVoxel(5,5,0, voxelColorThree); //front bottom right
        cube.setVoxel(0,5,5, voxelColorThree); //front top left
        cube.setVoxel(5,5,5, voxelColorThree); //front top right
        cube.show();
         delay(100);

            
    }
