\context Staff = "tenor" \with { \consists Ambitus_engraver } <<
	\set Staff.instrumentName = "Tenor"
	\set Staff.shortInstrumentName = "T."
	\set Score.skipBars = ##t
	\set Staff.printKeyCancellation = ##f
	\new Voice \global
	\new Voice \globalTempo

	\context Voice = "voz-tenor" {
		\override Voice.TextScript #'padding = #2.0
		\override MultiMeasureRest #'expand-limit = 1

		\clef "treble_8"
		\key e \minor

		% intro
		R1  |
		e 2 d  |
		c 4. b, 8 ~ b, 4 r  |
		e 8 e e e b 4 b 8 a ~  |
%% 5
		a 2 r  |
		e 2 d  |
		c 4. b, 8 ~ b, 4 r  |
		e 8 e e e d d d d  |
		r4 d g d  |
%% 10
		fis 2. r8 e 16 d  |
		e 1  |
		d 2. r4  |
		r2 e 8 fis g e  |
		r2 e 8 fis g e  |
%% 15
		r2 e 8 fis g e  |
		R1  |
		\bar "|."
	} % Voice

	\lyricsto "voz-tenor" \new Lyrics \lyricmode {
		% primera parte
		A -- le -- lu -- ya,
		a -- le -- lu -- "ya, a" le -- lu -- ya. __
		A -- le -- lu -- ya, __
		a -- le -- lu -- ya, a -- le -- lu -- ya,

		% segunda parte
		A -- le -- lu -- ya,
		a -- le -- lu -- ya,
		a -- le -- lu -- ya.

		% finale
		A -- le -- lu -- ya.
		A -- le -- lu -- ya.
		A -- le -- lu -- ya.

	} % Lyrics 1
>> % Staff ends
