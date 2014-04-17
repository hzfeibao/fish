
#ifndef __FishingJoy__GameScene__
#define __FishingJoy__GameScene__
#include "cocos2d.h"
#include "FishLayer.h"
#include "PanelLayer.h"
#include "MenuLayer.h"
#include "BackgroundLayer.h"
#include "CannonLayer.h"
typedef enum{
	k_Operate_Pause = 0,
	k_Operate_Resume
}OperateFlag;

class GameScene : public cocos2d::CCScene
{
public:
    CREATE_FUNC(GameScene);
    bool init();
	~GameScene();

	//
	void pause();
	void resume();
	void sound();
	void music();
	void reset();
	void transToMainMenu();
protected:
	BackgroundLayer* _backgroundLayer;
	CannonLayer* _cannonLayer;
	FishLayer* _fishLayer;
	PanelLayer* _panelLayer;
	MenuLayer* _menuLayer;

	//
	void operateAllScheduleAndActions(cocos2d::CCNode* node, OperateFlag flag);

	//
	void preloadResources();
};
#endif
