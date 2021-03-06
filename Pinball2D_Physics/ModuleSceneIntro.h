#pragma once
#include "Module.h"
#include "p2List.h"
#include "p2Point.h"
#include "Globals.h"
#include "Animation.h"

class PhysBody;

class ModuleSceneIntro : public Module
{
public:
	ModuleSceneIntro(Application* app, bool start_enabled = true);
	~ModuleSceneIntro();

	bool Start();
	update_status Update();
	bool CleanUp();
	void OnCollision(PhysBody* bodyA, PhysBody* bodyB);
	void ApplyChangesinGreenLights();
	//void ApplyChangesinRedLights();
	void restartGame(); //A function to reset everything and start again must be here

public:
	p2List<PhysBody*> mapshapes;
	
	PhysBody* leftflipper;
	PhysBody* rightflipper;
	PhysBody* leftflipper_joint;
	PhysBody* rightflipper_joint;
	PhysBody* leftflippersmall;
	PhysBody* rightflippersmall;
	PhysBody* leftflippersmall_joint;
	PhysBody* rightflippersmall_joint;
	
	PhysBody* bouncer1;
	bool sensorbouncer1_active;

	PhysBody* bouncer2;
	bool sensorbouncer2_active;

	PhysBody* bouncer3;
	bool sensorbouncer3_active;

	PhysBody* green_light;
	PhysBody* red_light;
	PhysBody* coin;

	PhysBody* sensorgreenup1;
	bool sensorgreenup1_active;
	
	PhysBody* sensorgreenup2;
	bool sensorgreenup2_active;

	PhysBody* sensorgreenup3;
	bool sensorgreenup3_active;

	PhysBody* sensorgreenup4;
	bool sensorgreenup4_active;

	PhysBody* sensorgreenup5;
	bool sensorgreenup5_active;

	PhysBody* sensorgreenup6;
	bool sensorgreenup6_active;

	PhysBody* sensorgreenup7;
	bool sensorgreenup7_active;

	PhysBody* barrier;
	bool barrier_active;



	SDL_Texture* map;
	SDL_Texture* leftflipper_tex;
	SDL_Texture* rightflipper_tex;
	SDL_Texture* leftflippersmall_tex;
	SDL_Texture* rightflippersmall_tex;
	SDL_Texture* green_light_tex;
	SDL_Texture* red_light_tex;
	SDL_Texture* graphics = nullptr;

	Animation banner_anim;
	Animation* current_banner_anim = nullptr;
	Animation touched_green_anim;
	Animation* current_green_anim = nullptr;
	Animation* current_bouncer_anim = nullptr;
	Animation touched_red_anim;
	Animation green_light_anim;
	Animation red_light_anim;
		
	bool restart;

	uint bonus_fx;
	uint music;
};
