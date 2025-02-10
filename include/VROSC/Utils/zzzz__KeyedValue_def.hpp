#pragma once
// IWYU pragma private; include "VROSC/Utils/KeyedValue.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(KeyedValue)
// Forward declare root types
namespace VROSC::Utils {
class KeyedValue;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::Utils::KeyedValue);
// Dependencies System.Object
namespace VROSC::Utils {
// Is value type: false
// CS Name: VROSC.Utils.KeyedValue
class CORDL_TYPE KeyedValue : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_HasKeys)) bool  HasKeys;

/// @brief Field Keys, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_Keys, put=__cordl_internal_set_Keys)) ::ArrayW<float_t,::Array<float_t>*>  Keys;

/// @brief Method GetValue, addr 0x17dc004, size 0x15c, virtual false, abstract: false, final false
inline float_t GetValue(float_t  progress) ;

static inline ::VROSC::Utils::KeyedValue* New_ctor(::VROSC::Utils::KeyedValue*  other) ;

static inline ::VROSC::Utils::KeyedValue* New_ctor(float_t  value) ;

/// @brief Method SetKeys, addr 0x17dbf44, size 0xc0, virtual false, abstract: false, final false
inline void SetKeys(::ArrayW<float_t,::Array<float_t>*>  keys) ;

constexpr ::ArrayW<float_t,::Array<float_t>*> const& __cordl_internal_get_Keys() const;

constexpr ::ArrayW<float_t,::Array<float_t>*>& __cordl_internal_get_Keys() ;

constexpr void __cordl_internal_set_Keys(::ArrayW<float_t,::Array<float_t>*>  value) ;

/// @brief Method .ctor, addr 0x17dbecc, size 0x78, virtual false, abstract: false, final false
inline void _ctor(::VROSC::Utils::KeyedValue*  other) ;

/// @brief Method .ctor, addr 0x17dbe20, size 0xac, virtual false, abstract: false, final false
inline void _ctor(float_t  value) ;

/// @brief Method get_HasKeys, addr 0x17dbdfc, size 0x24, virtual false, abstract: false, final false
inline bool get_HasKeys() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr KeyedValue() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "KeyedValue", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
KeyedValue(KeyedValue && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "KeyedValue", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
KeyedValue(KeyedValue const& ) = delete;

/// @brief Field KEY_COUNT offset 0xffffffff size 0x4
static constexpr int32_t  KEY_COUNT{static_cast<int32_t>(0xc8)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1576};

/// @brief Field Keys, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<float_t,::Array<float_t>*>  ___Keys;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::Utils::KeyedValue, ___Keys) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::Utils::KeyedValue, 0x18>, "Size mismatch!");

} // namespace end def VROSC::Utils
NEED_NO_BOX(::VROSC::Utils::KeyedValue);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::Utils::KeyedValue*, "VROSC.Utils", "KeyedValue");
