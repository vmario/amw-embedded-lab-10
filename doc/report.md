---
title: "Ćwiczenie 10: Zawody CTF (_Capture&nbsp;the flag_)"
author: [Mariusz Chilmon <<mariusz.chilmon@ctm.gdynia.pl>>]
lang: "pl"
titlepage: no
colorlinks: yes
header-right: "\\faEdit"
footer-left: "Sprawozdanie z laboratorium"
header-includes: |
  \usepackage{awesomebox}
  \usepackage{tikz}
  \usetikzlibrary{positioning}
  \usepackage[raster]{tcolorbox}
...

_W trosce o Państwa wyniki proszę o czytelne wpisywanie nazwisk._

**Data**: \dotfill

**Autorzy**: \dotfill

# Część praktyczna

## Zadanie podstawowe

**Ocena prowadzącego**: \dotfill

## Zadanie rozszerzone

**Ocena prowadzącego**: \dotfill

# Część teoretyczna

## Zadanie podstawowe

Oblicz kod wyjściowej instrukcji (sprawdzającej niedostępny dla nas przycisk podłączony do `PC4`).

\begin{description}
\item[O]
\textit{Opcode}, czyli kod instrukcji \lstinline{SBIS}.
\item[A]
Adres rejestru \lstinline{PINC}.
\item[b]
Numer bitu \lstinline{4}.
\end{description}

\awesomebox[violet]{2pt}{\faBook}{violet}{Opcode instrukcji \lstinline{SBIS} znajdziesz w \textit{AVR Instruction Set Manual}.}

\awesomebox[violet]{2pt}{\faBook}{violet}{Adres rejestru znajdziesz w rozdziale \textit{Register Summary} dokumentacji mikrokontrolera. Dla rozkazu \lstinline{SBIS} stosuje się adres przed nawiasem.}

\break

\tcbset{size=small, colback=white, halign=center, valign=bottom}
\begin{tcbitemize}[sharp corners, raster row skip=-.5mm, raster column skip=-.5mm, raster equal height=rows,
        raster columns=16, colframe=white]
    \tcbitem O
    \tcbitem O
    \tcbitem O
    \tcbitem O
    \tcbitem O
    \tcbitem O
    \tcbitem O
    \tcbitem O
    \tcbitem A
    \tcbitem A
    \tcbitem A
    \tcbitem A
    \tcbitem A
    \tcbitem b
    \tcbitem b
    \tcbitem b
\end{tcbitemize}
\begin{tcbitemize}[sharp corners, raster row skip=-.5mm, raster column skip=-.5mm, raster equal height=rows,
        raster columns=16]
    \tcbitem \vphantom{W}
    \tcbitem
    \tcbitem
    \tcbitem
    \tcbitem
    \tcbitem
    \tcbitem
    \tcbitem
    \tcbitem
    \tcbitem
    \tcbitem
    \tcbitem
    \tcbitem
    \tcbitem
    \tcbitem
    \tcbitem
\end{tcbitemize}

Każdą czwórkę bitów zamień na cyfrę szesnastkową:

\begin{tcbitemize}[sharp corners, raster row skip=-.5mm, raster column skip=-.5mm, raster equal height=rows,
        raster columns=4]
    \tcbitem \vphantom{W}
    \tcbitem
    \tcbitem
    \tcbitem
\end{tcbitemize}

Każdą parę cyfr połącz w bajt.

\begin{tcbitemize}[sharp corners, raster row skip=-.5mm, raster column skip=-.5mm, raster equal height=rows,
        raster columns=2]
    \tcbitem \vphantom{W}
    \tcbitem
\end{tcbitemize}

Mamy do czynienia z mikroprocesorem o architekturze _little endian_, co oznacza, że w pamięci najpierw zapisywany jest mniej znaczący bajt. Musisz więc zamienić bajty miejscami:

\begin{tcbitemize}[sharp corners, raster row skip=-.5mm, raster column skip=-.5mm, raster equal height=rows,
        raster columns=2]
    \tcbitem \vphantom{W}
    \tcbitem
\end{tcbitemize}

## Zadanie rozszerzone

Zmodyfikuj instrukcję tak, by odnosiła się do pinu `PC1`:

\tcbset{size=small, colback=white, halign=center, valign=bottom}
\begin{tcbitemize}[sharp corners, raster row skip=-.5mm, raster column skip=-.5mm, raster equal height=rows,
        raster columns=16, colframe=white]
    \tcbitem O
    \tcbitem O
    \tcbitem O
    \tcbitem O
    \tcbitem O
    \tcbitem O
    \tcbitem O
    \tcbitem O
    \tcbitem A
    \tcbitem A
    \tcbitem A
    \tcbitem A
    \tcbitem A
    \tcbitem b
    \tcbitem b
    \tcbitem b
\end{tcbitemize}
\begin{tcbitemize}[sharp corners, raster row skip=-.5mm, raster column skip=-.5mm, raster equal height=rows,
        raster columns=16]
    \tcbitem \vphantom{W}
    \tcbitem
    \tcbitem
    \tcbitem
    \tcbitem
    \tcbitem
    \tcbitem
    \tcbitem
    \tcbitem
    \tcbitem
    \tcbitem
    \tcbitem
    \tcbitem
    \tcbitem
    \tcbitem
    \tcbitem
\end{tcbitemize}
\begin{tcbitemize}[sharp corners, raster row skip=-.5mm, raster column skip=-.5mm, raster equal height=rows,
        raster columns=4]
    \tcbitem \vphantom{W}
    \tcbitem
    \tcbitem
    \tcbitem
\end{tcbitemize}
\begin{tcbitemize}[sharp corners, raster row skip=-.5mm, raster column skip=-.5mm, raster equal height=rows,
        raster columns=2]
    \tcbitem \vphantom{W}
    \tcbitem
\end{tcbitemize}
\begin{tcbitemize}[sharp corners, raster row skip=-.5mm, raster column skip=-.5mm, raster equal height=rows,
        raster columns=2]
    \tcbitem \vphantom{W}
    \tcbitem
\end{tcbitemize}

## \faCertificate&nbsp; Bonus

_+1 pkt dla drużyny, która jako pierwsza wyświetli poszukiwaną flagę._
