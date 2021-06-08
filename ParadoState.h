#ifndef STOPPEDSTATE_H_
#define STOPPEDSTATE_H_

#include "VideoPlayerState.h"

class VideoPlayer;

class ParadoState : public VideoPlayerState {
public:
	ParadoState();
	virtual ~ParadoState();

	virtual void Tocar(VideoPlayer * player);
};

#endif /* STOPPEDSTATE_H_ */
