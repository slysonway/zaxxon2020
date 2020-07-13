#pragma once
#include "Weapon.h"

#define SPRITE_COUNT_X 5
#define SPRITE_COUNT_Y 3
#define BLOCK_COUNT 5

class Game
{
public:
	Game();
	~Game() { };
	void run();

private:
	void processEvents();
	void update(sf::Time elapsedTime);
	void render();

	void InitSprites();
	void ResetSprites();

	void updateStatistics(sf::Time elapsedTime);
	void HandleTexts();
	void HandleCollisionEnemyMasterWeaponPlayer();
	void HanldeEnemyMasterWeaponMoves();
	void HandleEnemyMasterWeaponFiring();
	void HandleEnemyMasterMove();
	void HandleCollisionEnemyWeaponBlock();
	void HandleCollisionWeaponPlayer();
	void HanldeEnemyWeaponMoves();
	void HandleEnemyWeaponFiring();
	void HandleEnemyMoves();
	void HanldeWeaponMoves();
	void HandleCollisionWeaponBlock();
	void HandleCollisionWeaponEnemy();
	void HandleCollisionWeaponEnemyMaster();
	void HandleGameOver();
	void DisplayGameOver();
	void handlePlayerInput(sf::Keyboard::Key key, bool isPressed);

	//PK ADD:
	void HandleCollisionBlockPlayer();
	void ResetPlayer();
	void HandleBlockMoves();
	void HandleBlockDisabled();
	void HandleEnemyDisabled();
	void HandleMasterSpawn();

private:
	static const float		PlayerSpeed;
	static const sf::Time	TimePerFrame;

	int masterLives = 3;


	sf::RenderWindow		mWindow;
	sf::Texture	mTexture;
	sf::Sprite	mPlayer;
	sf::Font	mFont;
	sf::Text	mStatisticsText;
	sf::Time	mStatisticsUpdateTime;
	sf::Text	mText;
	sf::Text	_LivesText;
	sf::Text	_BossNumberText;
	int _lives = 10;
	sf::Text	_ScoreText;
	int _score = 0;
	int _bossNumber = 0;

	int _scoreBossSpawn = 200;

	std::size_t	mStatisticsNumFrames;
	bool mIsMovingUp;
	bool mIsMovingDown;
	bool mIsMovingRight;
	bool mIsMovingLeft;

	bool _IsGameOver = false;
	bool _IsEnemyWeaponFired = false;
	bool _IsPlayerWeaponFired = false;
	bool _IsEnemyMasterWeaponFired = false;

	sf::Texture	_TextureEnemy;
	sf::Texture	_TextureBlock;
	sf::Sprite	_Block[BLOCK_COUNT];
	sf::Texture	_TextureWeapon;
	sf::Texture	_TextureWeaponEnemy;
	sf::Texture	_TextureWeaponEnemyMaster;
	sf::Sprite	_Weapon;
	sf::Texture	_TextureEnemyMaster;
	sf::Sprite	_EnemyMaster;
	sf::Texture _TextureBackGround;
};

