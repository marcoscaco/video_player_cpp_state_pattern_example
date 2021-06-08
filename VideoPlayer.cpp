#include "VideoPlayer.h"

#include "ParadoState.h"
#include "TocandoState.h"
#include "PausadoState.h"

#include <iostream>

VideoPlayer::VideoPlayer()
: m_pState(new ParadoState()){

}

VideoPlayer::~VideoPlayer() {
	delete m_pState;
}

void VideoPlayer::Tocar() {
	m_pState->Tocar(this);
}

void VideoPlayer::Pausar() {
	m_pState->Pausar(this);
}

void VideoPlayer::Parar() {
	m_pState->Parar(this);
}

void VideoPlayer::SetState(State state)
{
	std::cout << "Troca de estado detectada:\n De: " << m_pState->GetName() << "\n Para: ";
	delete m_pState;

	if(state == ST_STOPPED)
	{
		m_pState = new ParadoState();
	}
	else if(state == ST_PLAYING)
	{
		m_pState = new TocandoState();
	}
	else
	{
		m_pState = new PausadoState();
	}

	std::cout << m_pState->GetName() << "\n";
}
