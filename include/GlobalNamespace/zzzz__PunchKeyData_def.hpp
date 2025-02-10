#pragma once
// IWYU pragma private; include "GlobalNamespace/PunchKeyData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__Key_def.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(PunchKeyData)
namespace GlobalNamespace {
struct Key_Type;
}
// Forward declare root types
namespace GlobalNamespace {
class PunchKeyData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PunchKeyData);
// Dependencies Key::Type, UnityEngine.ScriptableObject
namespace GlobalNamespace {
// Is value type: false
// CS Name: PunchKeyData
class CORDL_TYPE PunchKeyData : public ::UnityEngine::ScriptableObject {
public:
// Declarations
 __declspec(property(get=get_AlterateKeyCapChar)) ::StringW  AlterateKeyCapChar;

 __declspec(property(get=get_KeyCapChar)) ::StringW  KeyCapChar;

 __declspec(property(get=get_KeyType)) ::GlobalNamespace::Key_Type  KeyType;

/// @brief Field _alterateKeyCapChar, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__alterateKeyCapChar, put=__cordl_internal_set__alterateKeyCapChar)) ::StringW  _alterateKeyCapChar;

/// @brief Field _keyCapChar, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__keyCapChar, put=__cordl_internal_set__keyCapChar)) ::StringW  _keyCapChar;

/// @brief Field _keyType, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get__keyType, put=__cordl_internal_set__keyType)) ::GlobalNamespace::Key_Type  _keyType;

static inline ::GlobalNamespace::PunchKeyData* New_ctor() ;

/// @brief Method Set, addr 0x16bac10, size 0xc, virtual false, abstract: false, final false
inline void Set(::GlobalNamespace::Key_Type  keyType, ::StringW  keyCapChar, ::StringW  alterateKeyCapChar) ;

constexpr ::StringW const& __cordl_internal_get__alterateKeyCapChar() const;

constexpr ::StringW& __cordl_internal_get__alterateKeyCapChar() ;

constexpr ::StringW const& __cordl_internal_get__keyCapChar() const;

constexpr ::StringW& __cordl_internal_get__keyCapChar() ;

constexpr ::GlobalNamespace::Key_Type const& __cordl_internal_get__keyType() const;

constexpr ::GlobalNamespace::Key_Type& __cordl_internal_get__keyType() ;

constexpr void __cordl_internal_set__alterateKeyCapChar(::StringW  value) ;

constexpr void __cordl_internal_set__keyCapChar(::StringW  value) ;

constexpr void __cordl_internal_set__keyType(::GlobalNamespace::Key_Type  value) ;

/// @brief Method .ctor, addr 0x16bac1c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_AlterateKeyCapChar, addr 0x16bac08, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_AlterateKeyCapChar() ;

/// @brief Method get_KeyCapChar, addr 0x16bac00, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_KeyCapChar() ;

/// @brief Method get_KeyType, addr 0x16babf8, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::Key_Type get_KeyType() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PunchKeyData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PunchKeyData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PunchKeyData(PunchKeyData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PunchKeyData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PunchKeyData(PunchKeyData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14};

/// @brief Field _keyType, offset: 0x18, size: 0x4, def value: None
 ::GlobalNamespace::Key_Type  ____keyType;

/// @brief Field _keyCapChar, offset: 0x20, size: 0x8, def value: None
 ::StringW  ____keyCapChar;

/// @brief Field _alterateKeyCapChar, offset: 0x28, size: 0x8, def value: None
 ::StringW  ____alterateKeyCapChar;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PunchKeyData, ____keyType) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PunchKeyData, ____keyCapChar) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PunchKeyData, ____alterateKeyCapChar) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PunchKeyData, 0x30>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PunchKeyData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PunchKeyData*, "", "PunchKeyData");
