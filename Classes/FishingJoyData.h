
#ifndef __FishingJoy__FishingJoyData__
#define __FishingJoy__FishingJoyData__
#include "cocos2d.h"
class FishingJoyData : public cocos2d::CCObject
{
    public:
	static FishingJoyData* sharedFishingJoyData();
	CC_SYNTHESIZE(int, _gold, Gold);
	CC_SYNTHESIZE(bool, _isBeginner, IsBeginner);
	CC_SYNTHESIZE(float, _soundVolume, SoundVolume);
	CC_SYNTHESIZE(float, _musicVolume, MusicVolume);

	/**
	 * called where memory is not enough
	 */
	void purge();

	/**
	 * 将数据从内存保存到外部文件中
	 */
	void flush();

	/**
	 * 对Gold操作
	 */
	void alterGold(int delta);

	/**
	 * 重置数据为默认数值
	 */
	void reset();
    protected:
	FishingJoyData();
	~FishingJoyData();
	bool init();
};
#endif
