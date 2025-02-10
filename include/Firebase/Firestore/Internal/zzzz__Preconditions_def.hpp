#pragma once
// IWYU pragma private; include "Firebase/Firestore/Internal/Preconditions.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(Preconditions)
// Forward declare root types
namespace Firebase::Firestore::Internal {
class Preconditions;
}
// Write type traits
MARK_REF_PTR_T(::Firebase::Firestore::Internal::Preconditions);
// Dependencies System.Object
namespace Firebase::Firestore::Internal {
// Is value type: false
// CS Name: Firebase.Firestore.Internal.Preconditions
class CORDL_TYPE Preconditions : public ::System::Object {
public:
// Declarations
/// @brief Method CheckArgument, addr 0x190dfb8, size 0x54, virtual false, abstract: false, final false
static inline void CheckArgument(bool  condition, ::StringW  paramName, ::StringW  message) ;

/// @brief Method CheckNotNull, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline T CheckNotNull(T  argument, ::StringW  paramName) ;

/// @brief Method CheckNotNullOrEmpty, addr 0x190de94, size 0xd8, virtual false, abstract: false, final false
static inline ::StringW CheckNotNullOrEmpty(::StringW  argument, ::StringW  paramName) ;

/// @brief Method CheckState, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void CheckState(bool  condition, ::StringW  format, T  arg0) ;

/// @brief Method CheckState, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2>
static inline void CheckState(bool  condition, ::StringW  format, T1  arg0, T2  arg1) ;

/// @brief Method CheckState, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2,typename T3>
static inline void CheckState(bool  condition, ::StringW  format, T1  arg0, T2  arg1, T3  arg2) ;

/// @brief Method CheckState, addr 0x190df6c, size 0x4c, virtual false, abstract: false, final false
static inline void CheckState(bool  condition, ::StringW  message) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Preconditions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Preconditions", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Preconditions(Preconditions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Preconditions", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Preconditions(Preconditions const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11136};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Firebase::Firestore::Internal::Preconditions, 0x10>, "Size mismatch!");

} // namespace end def Firebase::Firestore::Internal
NEED_NO_BOX(::Firebase::Firestore::Internal::Preconditions);
DEFINE_IL2CPP_ARG_TYPE(::Firebase::Firestore::Internal::Preconditions*, "Firebase.Firestore.Internal", "Preconditions");
