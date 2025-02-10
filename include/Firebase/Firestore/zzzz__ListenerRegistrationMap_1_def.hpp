#pragma once
// IWYU pragma private; include "Firebase/Firestore/ListenerRegistrationMap_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ListenerRegistrationMap_1)
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System {
class Object;
}
namespace System {
template<typename T1,typename T2>
class Tuple_2;
}
// Forward declare root types
namespace Firebase::Firestore {
template<typename T>
class ListenerRegistrationMap_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Firebase::Firestore::ListenerRegistrationMap_1);
// Dependencies System.Object
namespace Firebase::Firestore {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Firebase.Firestore.ListenerRegistrationMap`1<T>
class CORDL_TYPE ListenerRegistrationMap_1 : public ::System::Object {
public:
// Declarations
/// @brief Field callbacks, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_callbacks, put=__cordl_internal_set_callbacks)) ::System::Collections::Generic::Dictionary_2<int32_t,::System::Tuple_2<::System::Object*,T>*>*  callbacks;

/// @brief Method AssertGenericArgumentIsDelegate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void AssertGenericArgumentIsDelegate() ;

/// @brief Method ClearCallbacksForOwner, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void ClearCallbacksForOwner(::System::Object*  owner) ;

static inline ::Firebase::Firestore::ListenerRegistrationMap_1<T>* New_ctor() ;

/// @brief Method TryGetCallback, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool TryGetCallback(int32_t  uid, ::ByRef<T>  callback) ;

/// @brief Method Unregister, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void Unregister(int32_t  uid) ;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::System::Tuple_2<::System::Object*,T>*>* const& __cordl_internal_get_callbacks() const;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::System::Tuple_2<::System::Object*,T>*>*& __cordl_internal_get_callbacks() ;

constexpr void __cordl_internal_set_callbacks(::System::Collections::Generic::Dictionary_2<int32_t,::System::Tuple_2<::System::Object*,T>*>*  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ListenerRegistrationMap_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ListenerRegistrationMap_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ListenerRegistrationMap_1(ListenerRegistrationMap_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ListenerRegistrationMap_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ListenerRegistrationMap_1(ListenerRegistrationMap_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11146};

/// @brief Field callbacks, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<int32_t,::System::Tuple_2<::System::Object*,T>*>*  ___callbacks;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Firebase::Firestore
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Firebase::Firestore::ListenerRegistrationMap_1, "Firebase.Firestore", "ListenerRegistrationMap`1");
