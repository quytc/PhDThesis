TARGET=main

SOURCES := $(wildcard *.tex) $(wildcard examples/*)

all:${TARGET}.pdf

${TARGET}.pdf: ${SOURCES}
	latexmk -pdf ${TARGET}.tex

silent: ${SOURCES}
	latexmk -pdf --silent ${TARGET}.tex

clean: cleantilde
	rm -f *.log *.aux *.aux.bak *.nav *.out *.snm *.dvi *.toc *.blg *.bbl

cleantilde:
	@find . -type f -iname '*~' -exec  rm {} \;

cleanall:clean
	rm -f ${TARGET}.pdf

echo:
	@echo ${SOURCES}
