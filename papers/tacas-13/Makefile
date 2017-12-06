TARGET=main

SOURCES := $(wildcard *.tex)

LATEXMK=latexmk -pdf

.PHONY: $(TARGET).pdf

all:$(TARGET).pdf

$(TARGET).pdf: $(SOURCES)
	$(LATEXMK) ${TARGET}.tex

silent: $(SOURCES)
	$(LATEXMK) --silent $(TARGET).tex

clean: cleantilde
	rm -f *.log *.aux *.aux.bak *.nav *.out *.snm *.dvi *.toc *.blg *.bbl

cleantilde:
	@find . -type f -iname '*~' -exec  rm {} \;

cleanall:clean
	rm -f $(TARGET).pdf

echo:
	@echo $(SOURCES)
