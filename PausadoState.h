
#ifndef PAUSEDSTATE_H_
#define PAUSEDSTATE_H_

#include "VideoPlayerState.h"

class VideoPlayer;

class PausadoState : public VideoPlayerState {
public:
	PausadoState();
	~PausadoState() override;

	virtual void Tocar(VideoPlayer * player);
	virtual void Parar(VideoPlayer * player);
};

#endif /* PAUSEDSTATE_H_ */
