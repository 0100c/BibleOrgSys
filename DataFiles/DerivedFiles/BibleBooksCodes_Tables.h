// ./DataFiles/DerivedFiles/BibleBooksCodes_Tables.h
//
// This UTF-8 file was automatically generated by BibleBooksCodes.py V0.68 on 2013-05-03 21:59:10.870277
//
// Bible books codes list data
//  Version: 0.68
//  Date: 2013-04-21
//

#ifndef BIBLEBOOKSCODES_Tables_h
#define BIBLEBOOKSCODES_Tables_h

typedef struct referenceAbbreviationDictEntryStruct {
    const unsigned char referenceAbbreviation[3+1];
    const unsigned char* ByzantineAbbreviation;
    const unsigned char* CCELNumberString;
    const int referenceNumber;
    const unsigned char* NETBibleAbbreviation;
    const unsigned char* OSISAbbreviation;
    const unsigned char USFMAbbreviation[3+1];
    const unsigned char USFMNumberString[2+1];
    const unsigned char* SBLAbbreviation;
    const unsigned char* SwordAbbreviation;
    const unsigned char* nameEnglish;
    const unsigned char* numExpectedChapters;
    const unsigned char* possibleAlternativeBooks;
} referenceAbbreviationDictEntry;

