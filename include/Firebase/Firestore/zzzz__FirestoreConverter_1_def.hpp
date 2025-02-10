#pragma once
// IWYU pragma private; include "Firebase/Firestore/FirestoreConverter_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(FirestoreConverter_1)
namespace System {
class Object;
}
// Forward declare root types
namespace Firebase::Firestore {
template<typename T>
class FirestoreConverter_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Firebase::Firestore::FirestoreConverter_1);
// Dependencies System.Object
namespace Firebase::Firestore {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Firebase.Firestore.FirestoreConverter`1<T>
class CORDL_TYPE FirestoreConverter_1 : public ::System::Object {
public:
// Declarations
/// @brief Method FromFirestore, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline T FromFirestore(::System::Object*  value) ;

/// @brief Method ToFirestore, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::System::Object* ToFirestore(T  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FirestoreConverter_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FirestoreConverter_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FirestoreConverter_1(FirestoreConverter_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FirestoreConverter_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FirestoreConverter_1(FirestoreConverter_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11147};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Firebase::Firestore
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Firebase::Firestore::FirestoreConverter_1, "Firebase.Firestore", "FirestoreConverter`1");
