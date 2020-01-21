#pragma once

#include "Scene.h"

// A child of the Scene class to make a new animated scene.
// Feel free to add any new member functions or variables to MyScene.
class MyScene : public Scene
{
    protected:
<<<<<<< HEAD
        int x = 0;
        int y = 0;
=======
		int x = 0;
		int y = 0;
>>>>>>> 031d4173097b559fe36629dc680db2bbff2c3a3a
        // Called once when the scene begins.
        virtual void init()
        {
            // Keep this call to the parent's version of init()
            Scene::init();
            // Your code here


        }

        // Called once every frame. 
        virtual void update()
        {
            clearBoard();
            board[y][x] = 'X';
            x++;
            y++;
            // Your code here
            clearBoard();
            board[y][x] = 'X';
			x++;
			y++;



            // Keep this call to the parent's version of update()
            Scene::update();
        }
};
