#pragma once
// IWYU pragma private; include "VROSC/EnvironmentSettingsData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(EnvironmentSettingsData)
// Forward declare root types
namespace VROSC {
class EnvironmentSettingsData;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::EnvironmentSettingsData);
// Dependencies System.Object, UnityEngine.Color
namespace VROSC {
// Is value type: false
// CS Name: VROSC.EnvironmentSettingsData
class CORDL_TYPE EnvironmentSettingsData : public ::System::Object {
public:
// Declarations
/// @brief Field AccentColor, offset 0x38, size 0x10 
 __declspec(property(get=__cordl_internal_get_AccentColor, put=__cordl_internal_set_AccentColor)) ::UnityEngine::Color  AccentColor;

/// @brief Field ActiveColor, offset 0x28, size 0x10 
 __declspec(property(get=__cordl_internal_get_ActiveColor, put=__cordl_internal_set_ActiveColor)) ::UnityEngine::Color  ActiveColor;

/// @brief Field EffectsAmount, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get_EffectsAmount, put=__cordl_internal_set_EffectsAmount)) float_t  EffectsAmount;

/// @brief Field Id, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_Id, put=__cordl_internal_set_Id)) ::StringW  Id;

/// @brief Field InstrumentColor, offset 0x48, size 0x10 
 __declspec(property(get=__cordl_internal_get_InstrumentColor, put=__cordl_internal_set_InstrumentColor)) ::UnityEngine::Color  InstrumentColor;

/// @brief Field PrimaryColor, offset 0x18, size 0x10 
 __declspec(property(get=__cordl_internal_get_PrimaryColor, put=__cordl_internal_set_PrimaryColor)) ::UnityEngine::Color  PrimaryColor;

static inline ::VROSC::EnvironmentSettingsData* New_ctor() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_AccentColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_AccentColor() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_ActiveColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_ActiveColor() ;

constexpr float_t const& __cordl_internal_get_EffectsAmount() const;

constexpr float_t& __cordl_internal_get_EffectsAmount() ;

constexpr ::StringW const& __cordl_internal_get_Id() const;

constexpr ::StringW& __cordl_internal_get_Id() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_InstrumentColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_InstrumentColor() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_PrimaryColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_PrimaryColor() ;

constexpr void __cordl_internal_set_AccentColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_ActiveColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_EffectsAmount(float_t  value) ;

constexpr void __cordl_internal_set_Id(::StringW  value) ;

constexpr void __cordl_internal_set_InstrumentColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_PrimaryColor(::UnityEngine::Color  value) ;

/// @brief Method .ctor, addr 0x183ce04, size 0x6c, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EnvironmentSettingsData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EnvironmentSettingsData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EnvironmentSettingsData(EnvironmentSettingsData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EnvironmentSettingsData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EnvironmentSettingsData(EnvironmentSettingsData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{381};

/// @brief Field Id, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___Id;

/// @brief Field PrimaryColor, offset: 0x18, size: 0x10, def value: None
 ::UnityEngine::Color  ___PrimaryColor;

/// @brief Field ActiveColor, offset: 0x28, size: 0x10, def value: None
 ::UnityEngine::Color  ___ActiveColor;

/// @brief Field AccentColor, offset: 0x38, size: 0x10, def value: None
 ::UnityEngine::Color  ___AccentColor;

/// @brief Field InstrumentColor, offset: 0x48, size: 0x10, def value: None
 ::UnityEngine::Color  ___InstrumentColor;

/// @brief Field EffectsAmount, offset: 0x58, size: 0x4, def value: None
 float_t  ___EffectsAmount;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::EnvironmentSettingsData, ___Id) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::EnvironmentSettingsData, ___PrimaryColor) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::EnvironmentSettingsData, ___ActiveColor) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::EnvironmentSettingsData, ___AccentColor) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::EnvironmentSettingsData, ___InstrumentColor) == 0x48, "Offset mismatch!");

static_assert(offsetof(::VROSC::EnvironmentSettingsData, ___EffectsAmount) == 0x58, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::EnvironmentSettingsData, 0x60>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::EnvironmentSettingsData);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::EnvironmentSettingsData*, "VROSC", "EnvironmentSettingsData");
