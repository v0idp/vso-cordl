#pragma once
// IWYU pragma private; include "VROSC/LooperSettings.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "VROSC/zzzz__ToolSettings_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(LooperSettings)
namespace UnityEngine {
struct Color;
}
namespace VROSC::UI {
class UIColorGetter;
}
namespace VROSC {
class LoopCompressionSettings;
}
// Forward declare root types
namespace VROSC {
class LooperSettings;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::LooperSettings);
// Dependencies VROSC.ToolSettings
namespace VROSC {
// Is value type: false
// CS Name: VROSC.LooperSettings
class CORDL_TYPE LooperSettings : public ::VROSC::ToolSettings {
public:
// Declarations
/// @brief Field _compressionSettings, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__compressionSettings, put=__cordl_internal_set__compressionSettings)) ::VROSC::LoopCompressionSettings*  _compressionSettings;

/// @brief Field _loopPlayerColors, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__loopPlayerColors, put=__cordl_internal_set__loopPlayerColors)) ::ArrayW<::UnityW<::VROSC::UI::UIColorGetter>,::Array<::UnityW<::VROSC::UI::UIColorGetter>>*>  _loopPlayerColors;

/// @brief Method CompressLoop, addr 0x1710a08, size 0x1c, virtual false, abstract: false, final false
inline ::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*> CompressLoop(::ArrayW<::ArrayW<float_t,::Array<float_t>*>,::Array<::ArrayW<float_t,::Array<float_t>*>>*>  audio) ;

/// @brief Method GetRandomColor, addr 0x17109bc, size 0x4c, virtual false, abstract: false, final false
inline ::UnityEngine::Color GetRandomColor() ;

static inline ::VROSC::LooperSettings* New_ctor() ;

constexpr ::VROSC::LoopCompressionSettings* const& __cordl_internal_get__compressionSettings() const;

constexpr ::VROSC::LoopCompressionSettings*& __cordl_internal_get__compressionSettings() ;

constexpr ::ArrayW<::UnityW<::VROSC::UI::UIColorGetter>,::Array<::UnityW<::VROSC::UI::UIColorGetter>>*> const& __cordl_internal_get__loopPlayerColors() const;

constexpr ::ArrayW<::UnityW<::VROSC::UI::UIColorGetter>,::Array<::UnityW<::VROSC::UI::UIColorGetter>>*>& __cordl_internal_get__loopPlayerColors() ;

constexpr void __cordl_internal_set__compressionSettings(::VROSC::LoopCompressionSettings*  value) ;

constexpr void __cordl_internal_set__loopPlayerColors(::ArrayW<::UnityW<::VROSC::UI::UIColorGetter>,::Array<::UnityW<::VROSC::UI::UIColorGetter>>*>  value) ;

/// @brief Method .ctor, addr 0x1710a24, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LooperSettings() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LooperSettings", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LooperSettings(LooperSettings && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LooperSettings", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LooperSettings(LooperSettings const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{886};

/// @brief Field _loopPlayerColors, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::UnityW<::VROSC::UI::UIColorGetter>,::Array<::UnityW<::VROSC::UI::UIColorGetter>>*>  ____loopPlayerColors;

/// @brief Field _compressionSettings, offset: 0x30, size: 0x8, def value: None
 ::VROSC::LoopCompressionSettings*  ____compressionSettings;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::LooperSettings, ____loopPlayerColors) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::LooperSettings, ____compressionSettings) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::LooperSettings, 0x38>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::LooperSettings);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::LooperSettings*, "VROSC", "LooperSettings");
