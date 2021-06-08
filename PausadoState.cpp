#include "PausadoState.h"
#include "VideoPlayer.h"

PausadoState::PausadoState()
: VideoPlayerState(std::string("PAUSADO")) {
}

PausadoState::~PausadoState() {
}

void PausadoState::Tocar(VideoPlayer * player)
{
	player->SetState(VideoPlayer::ST_PLAYING);
}

void PausadoState::Parar(VideoPlayer * player)
{
	player->SetState(VideoPlayer::ST_STOPPED);
}
