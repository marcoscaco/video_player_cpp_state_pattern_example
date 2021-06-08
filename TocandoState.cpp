
#include "TocandoState.h"
#include "VideoPlayer.h"

TocandoState::TocandoState()
: VideoPlayerState(std::string("TOCANDO")) {
}

TocandoState::~TocandoState() {
}

void TocandoState::Pausar(VideoPlayer * player)
{
	player->SetState(VideoPlayer::ST_PAUSED);
}

void TocandoState::Parar(VideoPlayer * player)
{
	player->SetState(VideoPlayer::ST_STOPPED);
}
