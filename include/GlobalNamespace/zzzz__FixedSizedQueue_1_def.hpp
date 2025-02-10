#pragma once
// IWYU pragma private; include "GlobalNamespace/FixedSizedQueue_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(FixedSizedQueue_1)
namespace System::Collections::Concurrent {
template<typename T>
class ConcurrentQueue_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename T>
class FixedSizedQueue_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::GlobalNamespace::FixedSizedQueue_1);
// Dependencies System.Object
namespace GlobalNamespace {
// cpp template
template<typename T>
// Is value type: false
// CS Name: FixedSizedQueue`1<T>
class CORDL_TYPE FixedSizedQueue_1 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Count)) int32_t  Count;

 __declspec(property(get=get_Limit, put=set_Limit)) int32_t  Limit;

/// @brief Field <Limit>k__BackingField, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get__Limit_k__BackingField, put=__cordl_internal_set__Limit_k__BackingField)) int32_t  _Limit_k__BackingField;

/// @brief Field lockObject, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_lockObject, put=__cordl_internal_set_lockObject)) ::System::Object*  lockObject;

/// @brief Field q, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_q, put=__cordl_internal_set_q)) ::System::Collections::Concurrent::ConcurrentQueue_1<T>*  q;

/// @brief Method Clear, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void Clear() ;

/// @brief Method Enqueue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void Enqueue(T  obj) ;

/// @brief Method Get, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline T Get(int32_t  index) ;

static inline ::GlobalNamespace::FixedSizedQueue_1<T>* New_ctor() ;

/// @brief Method ToArray, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::ArrayW<T,::Array<T>*> ToArray() ;

constexpr int32_t const& __cordl_internal_get__Limit_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__Limit_k__BackingField() ;

constexpr ::System::Object* const& __cordl_internal_get_lockObject() const;

constexpr ::System::Object*& __cordl_internal_get_lockObject() ;

constexpr ::System::Collections::Concurrent::ConcurrentQueue_1<T>* const& __cordl_internal_get_q() const;

constexpr ::System::Collections::Concurrent::ConcurrentQueue_1<T>*& __cordl_internal_get_q() ;

constexpr void __cordl_internal_set__Limit_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set_lockObject(::System::Object*  value) ;

constexpr void __cordl_internal_set_q(::System::Collections::Concurrent::ConcurrentQueue_1<T>*  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Count, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t get_Count() ;

/// @brief Method get_Limit, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t get_Limit() ;

/// @brief Method set_Limit, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void set_Limit(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FixedSizedQueue_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FixedSizedQueue_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FixedSizedQueue_1(FixedSizedQueue_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FixedSizedQueue_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FixedSizedQueue_1(FixedSizedQueue_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{66};

/// @brief Field q, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Concurrent::ConcurrentQueue_1<T>*  ___q;

/// @brief Field lockObject, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  ___lockObject;

/// @brief Field <Limit>k__BackingField, offset: 0x20, size: 0x4, def value: None
 int32_t  ____Limit_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::FixedSizedQueue_1, "", "FixedSizedQueue`1");
