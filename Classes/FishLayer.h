#pragma once
#include "cocos2d.h"
#include "Fish.h"
class FishLayer : public cocos2d::CCLayer
{
public:
	CREATE_FUNC(FishLayer);
	bool init();
	CC_SYNTHESIZE_READONLY(cocos2d::CCArray*, _fishes, Fishes);
	~FishLayer();
protected:
	void addFish(float dt);
};
#endif

