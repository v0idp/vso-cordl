#pragma once
// IWYU pragma private; include "VROSC/VersionDisplay.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(VersionDisplay)
namespace TMPro {
class TMP_Text;
}
// Forward declare root types
namespace VROSC {
class VersionDisplay;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::VersionDisplay);
// Dependencies UnityEngine.MonoBehaviour
namespace VROSC {
// Is value type: false
// CS Name: VROSC.VersionDisplay
class CORDL_TYPE VersionDisplay : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _tmpText, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__tmpText, put=__cordl_internal_set__tmpText)) ::UnityW<::TMPro::TMP_Text>  _tmpText;

/// @brief Method Awake, addr 0x177b858, size 0x13c, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method GetAndroidBundleNumberFromFile, addr 0x177b994, size 0x294, virtual false, abstract: false, final false
inline ::StringW GetAndroidBundleNumberFromFile() ;

static inline ::VROSC::VersionDisplay* New_ctor() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get__tmpText() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get__tmpText() ;

constexpr void __cordl_internal_set__tmpText(::UnityW<::TMPro::TMP_Text>  value) ;

/// @brief Method .ctor, addr 0x177bc28, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_AndroidBundleNumberFilePath, addr 0x177b7b8, size 0xa0, virtual false, abstract: false, final false
static inline ::StringW get_AndroidBundleNumberFilePath() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VersionDisplay() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VersionDisplay", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
VersionDisplay(VersionDisplay && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VersionDisplay", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
VersionDisplay(VersionDisplay const& ) = delete;

/// @brief Field AndroidBundleNumberFileName offset 0xffffffff size 0x8
static constexpr ::ConstString  AndroidBundleNumberFileName{u"AndroidBundleNumber.txt"};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1291};

/// @brief Field _tmpText, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ____tmpText;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::VersionDisplay, ____tmpText) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::VersionDisplay, 0x28>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::VersionDisplay);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::VersionDisplay*, "VROSC", "VersionDisplay");
