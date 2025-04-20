// Fill out your copyright notice in the Description page of Project Settings.


#include "Widget/Component/Battle/ChatSlot.h"
#include "Components/HorizontalBox.h"
#include "Components/Image.h"
#include <Utility/ChatData.h>

void UChatSlot::Init(FChat data)
{
	//add image component to materialsBox
	materialsBox->ClearChildren();
	//add image component to materialsBox for each material type
	UImage* image = NewObject<UImage>(this, UImage::StaticClass());
	image->SetColorAndOpacity(FLinearColor::Black);

	materials = data.MaterialTypes;
	for (EWordType type : materials)
	{
		switch (type)
		{
		case EWordType::Comfort:
			image->SetColorAndOpacity(FLinearColor::Green);
			break;
		case EWordType::Encourage:
			image->SetColorAndOpacity(FLinearColor::Red);
			break;
		case EWordType::Reflection:
			image->SetColorAndOpacity(FLinearColor::Blue);
			break;
		default:
			break;
		}
	}
	materialsBox->AddChild(image);
}