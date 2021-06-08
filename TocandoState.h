#ifndef PLAYINGSTATE_H_
#define PLAYINGSTATE_H_

#include "VideoPlayerState.h"

class VideoPlayer;

class TocandoState : public VideoPlayerState {
public:
	TocandoState();
	virtual ~TocandoState();

	virtual void Pausar(VideoPlayer * player);
	virtual void Parar(VideoPlayer * player);
};

#endif /* PLAYINGSTATE_H_ */
