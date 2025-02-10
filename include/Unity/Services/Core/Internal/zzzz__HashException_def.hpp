#pragma once
// IWYU pragma private; include "Unity/Services/Core/Internal/HashException.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Exception_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(HashException)
namespace System {
class Exception;
}
// Forward declare root types
namespace Unity::Services::Core::Internal {
class HashException;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Services::Core::Internal::HashException);
// Dependencies System.Exception
namespace Unity::Services::Core::Internal {
// Is value type: false
// CS Name: Unity.Services.Core.Internal.HashException
class CORDL_TYPE HashException : public ::System::Exception {
public:
// Declarations
 __declspec(property(get=get_Hash)) int32_t  Hash;

/// @brief Field <Hash>k__BackingField, offset 0x8c, size 0x4 
 __declspec(property(get=__cordl_internal_get__Hash_k__BackingField, put=__cordl_internal_set__Hash_k__BackingField)) int32_t  _Hash_k__BackingField;

static inline ::Unity::Services::Core::Internal::HashException* New_ctor(int32_t  hash, ::StringW  message) ;

static inline ::Unity::Services::Core::Internal::HashException* New_ctor(int32_t  hash, ::StringW  message, ::System::Exception*  inner) ;

constexpr int32_t const& __cordl_internal_get__Hash_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__Hash_k__BackingField() ;

constexpr void __cordl_internal_set__Hash_k__BackingField(int32_t  value) ;

/// @brief Method .ctor, addr 0x2ea1e6c, size 0x6c, virtual false, abstract: false, final false
inline void _ctor(int32_t  hash, ::StringW  message) ;

/// @brief Method .ctor, addr 0x2ea1ed8, size 0x84, virtual false, abstract: false, final false
inline void _ctor(int32_t  hash, ::StringW  message, ::System::Exception*  inner) ;

/// @brief Method get_Hash, addr 0x2ea1e64, size 0x8, virtual false, abstract: false, final false
inline int32_t get_Hash() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HashException() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HashException", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
HashException(HashException && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HashException", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
HashException(HashException const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11992};

/// @brief Field <Hash>k__BackingField, offset: 0x8c, size: 0x4, def value: None
 int32_t  ____Hash_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::Services::Core::Internal::HashException, ____Hash_k__BackingField) == 0x8c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Services::Core::Internal::HashException, 0x90>, "Size mismatch!");

} // namespace end def Unity::Services::Core::Internal
NEED_NO_BOX(::Unity::Services::Core::Internal::HashException);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Core::Internal::HashException*, "Unity.Services.Core.Internal", "HashException");
