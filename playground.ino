#include "beta-cube-library.h" 
#include "L3D_CubePixel.h" 
#include <math.h> 

//Cube cube = Cube(6,50);
Cube cube(6,50);
void drawHeart(Color);

void setup() {
   cube.begin();
   }

void loop() {
  Color voxelColor(0, 100, 255);

  drawHeart(voxelColor);

  cube.show();
            
    }

//draws a heart in the front vertical plane
void drawHeart(Color voxelColor) {
  cube.setVoxel(2, 0, 5, voxelColor);
  cube.setVoxel(1, 1, 5, voxelColor);
  cube.setVoxel(3, 1, 5, voxelColor);
  cube.setVoxel(0, 2, 5, voxelColor);
  cube.setVoxel(4, 2, 5, voxelColor);
  cube.setVoxel(0, 3, 5, voxelColor);
  cube.setVoxel(4, 3, 5, voxelColor);
  cube.setVoxel(1, 4, 5, voxelColor);
  cube.setVoxel(3, 4, 5, voxelColor);
  cube.setVoxel(2, 3, 5, voxelColor);
}
