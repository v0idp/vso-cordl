#pragma once
// IWYU pragma private; include "UnityEngine/QualitySettings.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(QualitySettings)
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace UnityEngine {
struct ColorSpace;
}
// Forward declare root types
namespace UnityEngine {
class QualitySettings;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::QualitySettings);
// Dependencies UnityEngine.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.QualitySettings
class CORDL_TYPE QualitySettings : public ::UnityEngine::Object {
public:
// Declarations
/// @brief Field activeQualityLevelChanged, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_activeQualityLevelChanged, put=setStaticF_activeQualityLevelChanged)) ::System::Action_2<int32_t,int32_t>*  activeQualityLevelChanged;

/// @brief Method OnActiveQualityLevelChanged, addr 0x2f6a608, size 0x80, virtual false, abstract: false, final false
static inline void OnActiveQualityLevelChanged(int32_t  previousQualityLevel, int32_t  currentQualityLevel) ;

static inline ::System::Action_2<int32_t,int32_t>* getStaticF_activeQualityLevelChanged() ;

/// @brief Method get_activeColorSpace, addr 0x2f6a6ec, size 0x28, virtual false, abstract: false, final false
static inline ::UnityEngine::ColorSpace get_activeColorSpace() ;

/// @brief Method get_antiAliasing, addr 0x2f6a688, size 0x28, virtual false, abstract: false, final false
static inline int32_t get_antiAliasing() ;

static inline void setStaticF_activeQualityLevelChanged(::System::Action_2<int32_t,int32_t>*  value) ;

/// @brief Method set_antiAliasing, addr 0x2f6a6b0, size 0x3c, virtual false, abstract: false, final false
static inline void set_antiAliasing(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr QualitySettings() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "QualitySettings", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
QualitySettings(QualitySettings && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "QualitySettings", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
QualitySettings(QualitySettings const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8452};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::QualitySettings, 0x18>, "Size mismatch!");

} // namespace end def UnityEngine
NEED_NO_BOX(::UnityEngine::QualitySettings);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::QualitySettings*, "UnityEngine", "QualitySettings");
