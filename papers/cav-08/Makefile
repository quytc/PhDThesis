TARGET=head

SOURCES=$(shell ls *.tex)
PRINTER=pr1132

PRINTOPT=
ifeq ("${PRINTER}","pr1132")
PRINTOPT= -o StapleLocation=UpperLeft
endif

all:${TARGET}.pdf

echo:
	@echo "Echoing the sources:"
	@echo ${SOURCES}

${TARGET}.dvi: ${SOURCES}
	latexmk ${TARGET}.tex

# ${TARGET}.ps:${TARGET}.dvi ${SOURCES}
# 	dvips ${TARGET}.dvi -o

# ${TARGET}.pdf:${TARGET}.ps ${SOURCES}
# 	ps2pdf ${TARGET}.ps

${TARGET}.pdf:${TARGET}.dvi ${SOURCES}
	dvipdf ${TARGET}.dvi

print:${TARGET}.pdf
	lpr -P ${PRINTER} ${PRINTOPT} ${TARGET}.pdf

clean: cleantilde
	rm -f *.log *.aux *.aux.bak *.nav *.out *.snm *.dvi *.toc *.blg *.bbl

cleantilde:
	rm -f *~

cleanall:clean
	rm -f ${TARGET}.ps ${TARGET}.pdf
