#include "ExportWidget.h"

#include "Misc/FileHelper.h"
#include "Misc/Paths.h"

void UExportWidget::ExportImageConfig(const FString& _Parameters)
{
  auto ProjectPath = FPaths::ProjectDir() + "ImageParameters.csv";
  const TCHAR* FilePath = *ProjectPath;

  if (FFileHelper::SaveStringToFile(_Parameters, FilePath))
  {
    UE_LOG(LogTemp, Warning, TEXT("File exported correctly."));
  }
  else
  {
    UE_LOG(LogTemp, Warning, TEXT("File exported incorrectly."));
  }
}