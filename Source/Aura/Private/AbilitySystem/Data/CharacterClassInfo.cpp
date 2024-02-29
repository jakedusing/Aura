// Copyright Jake Dusing


#include "AbilitySystem/Data/CharacterClassInfo.h"

FCharacterClassDefaultInto UCharacterClassInfo::GetClassDefaultInfo(ECharacterClass CharacterClass)
{
	return CharacterClassInformation.FindChecked(CharacterClass);
}
