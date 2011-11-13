\context Staff = "mezzo" \with { \consists Ambitus_engraver } <<
	\set Staff.instrumentName = "Mezzosoprano"
	\set Staff.shortInstrumentName = "M."
	\set Score.skipBars = ##t
	\set Staff.printKeyCancellation = ##f
	\new Voice \global
	\new Voice \globalTempo

	\context Voice = "voz-mezzo" {
		\override Voice.TextScript #'padding = #2.0
		\override MultiMeasureRest #'expand-limit = 1

		\clef "treble"
		\key e \minor

		% intro
		R1  |
		r4 g' fis' 2  |
		e' 4. dis' 8 ~ dis' 2  |
		R1  |
%% 5
		r2 \times 2/3 { d' 4 e' fis' }  |
		g' 2 fis'  |
		e' 4. dis' 4 r8 r4  |
		r2 r4 g' 8 a'  |
		b' 4 b' 2 a' 8 g'  |
%% 10
		a' 4 a' 2 r8 g' 16 fis'  |
		g' 1 (
		% warning: overlong bar truncated here |
		fis' 2 d' 4 fis' )  |
		e' 4 e' 8 fis' g' e' r4  |
		r4 e' 8 fis' g' e' r4  |
%% 15
		r4 e' 8 fis' g' e' r4  |
		R1  |
		\bar "|."
	} % Voice

	\lyricsto "voz-mezzo" \new Lyrics \lyricmode {
		% primera parte
		A -- le -- lu -- ya,
		a -- le -- lu -- "ya, a" le -- lu -- ya.

		% segunda parte
		A -- le -- lu -- ya,
		a -- le -- lu -- ya,
		a -- le -- lu __ ya.

		% finale
		A -- le -- lu -- ya.
		A -- le -- lu -- ya.
		A -- le -- lu -- ya.

	} % Lyrics 1
>> % Staff ends
