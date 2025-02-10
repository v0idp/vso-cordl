#pragma once
// IWYU pragma private; include "VROSC/DebugSettings.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(DebugSettings)
// Forward declare root types
namespace VROSC {
class DebugSettings;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::DebugSettings);
// Dependencies System.Object
namespace VROSC {
// Is value type: false
// CS Name: VROSC.DebugSettings
class CORDL_TYPE DebugSettings : public ::System::Object {
public:
// Declarations
/// @brief Field DisableSpectatorCamera, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_DisableSpectatorCamera, put=setStaticF_DisableSpectatorCamera)) bool  DisableSpectatorCamera;

/// @brief Field ShowLoopData, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_ShowLoopData, put=setStaticF_ShowLoopData)) bool  ShowLoopData;

/// @brief Field ShowReactToBeatLines, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_ShowReactToBeatLines, put=setStaticF_ShowReactToBeatLines)) bool  ShowReactToBeatLines;

/// @brief Method LoadValues, addr 0x1712524, size 0xe0, virtual false, abstract: false, final false
static inline void LoadValues() ;

/// @brief Method ReadBool, addr 0x1712508, size 0x1c, virtual false, abstract: false, final false
static inline bool ReadBool(::StringW  key) ;

/// @brief Method SaveValues, addr 0x1712438, size 0xc4, virtual false, abstract: false, final false
static inline void SaveValues() ;

/// @brief Method WriteBool, addr 0x17124fc, size 0xc, virtual false, abstract: false, final false
static inline void WriteBool(::StringW  key, bool  value) ;

static inline bool getStaticF_DisableSpectatorCamera() ;

static inline bool getStaticF_ShowLoopData() ;

static inline bool getStaticF_ShowReactToBeatLines() ;

static inline void setStaticF_DisableSpectatorCamera(bool  value) ;

static inline void setStaticF_ShowLoopData(bool  value) ;

static inline void setStaticF_ShowReactToBeatLines(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DebugSettings() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DebugSettings", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DebugSettings(DebugSettings && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DebugSettings", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DebugSettings(DebugSettings const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{902};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::VROSC::DebugSettings, 0x10>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::DebugSettings);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::DebugSettings*, "VROSC", "DebugSettings");
