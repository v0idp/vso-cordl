#pragma once
// IWYU pragma private; include "Firebase/Firestore/Internal/Util.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(Util)
namespace Firebase::Firestore::Internal {
template<typename T,typename U>
class Util__MapResult_c__AnonStorey0_2;
}
namespace Firebase::Firestore::Internal {
template<typename U>
class Util__MapResult_c__AnonStorey1_1;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System {
class AggregateException;
}
namespace System {
class Exception;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
// Forward declare root types
namespace Firebase::Firestore::Internal {
class Util;
}
namespace Firebase::Firestore::Internal {
template<typename T,typename U>
class Util__MapResult_c__AnonStorey0_2;
}
namespace Firebase::Firestore::Internal {
template<typename U>
class Util__MapResult_c__AnonStorey1_1;
}
// Write type traits
MARK_REF_PTR_T(::Firebase::Firestore::Internal::Util);
MARK_GEN_REF_PTR_T(::Firebase::Firestore::Internal::Util__MapResult_c__AnonStorey0_2);
MARK_GEN_REF_PTR_T(::Firebase::Firestore::Internal::Util__MapResult_c__AnonStorey1_1);
// Dependencies System.Object
namespace Firebase::Firestore::Internal {
// cpp template
template<typename T,typename U>
// Is value type: false
// CS Name: Firebase.Firestore.Internal.Util/<MapResult>c__AnonStorey0`2<T,U>
class CORDL_TYPE Util__MapResult_c__AnonStorey0_2 : public ::System::Object {
public:
// Declarations
/// @brief Field mapFunc, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_mapFunc, put=__cordl_internal_set_mapFunc)) ::System::Func_2<T,U>*  mapFunc;

static inline ::Firebase::Firestore::Internal::Util__MapResult_c__AnonStorey0_2<T,U>* New_ctor() ;

constexpr ::System::Func_2<T,U>* const& __cordl_internal_get_mapFunc() const;

constexpr ::System::Func_2<T,U>*& __cordl_internal_get_mapFunc() ;

constexpr void __cordl_internal_set_mapFunc(::System::Func_2<T,U>*  value) ;

/// @brief Method <>m__0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline U __m__0(::System::Threading::Tasks::Task_1<T>*  completedTask) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Util__MapResult_c__AnonStorey0_2() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Util__MapResult_c__AnonStorey0_2", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Util__MapResult_c__AnonStorey0_2(Util__MapResult_c__AnonStorey0_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Util__MapResult_c__AnonStorey0_2", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Util__MapResult_c__AnonStorey0_2(Util__MapResult_c__AnonStorey0_2 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11133};

/// @brief Field mapFunc, offset: 0x10, size: 0x8, def value: None
 ::System::Func_2<T,U>*  ___mapFunc;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Firebase::Firestore::Internal
// Dependencies System.Object
namespace Firebase::Firestore::Internal {
// cpp template
template<typename U>
// Is value type: false
// CS Name: Firebase.Firestore.Internal.Util/<MapResult>c__AnonStorey1`1<U>
class CORDL_TYPE Util__MapResult_c__AnonStorey1_1 : public ::System::Object {
public:
// Declarations
/// @brief Field result, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_result, put=__cordl_internal_set_result)) U  result;

static inline ::Firebase::Firestore::Internal::Util__MapResult_c__AnonStorey1_1<U>* New_ctor() ;

constexpr U const& __cordl_internal_get_result() const;

constexpr U& __cordl_internal_get_result() ;

constexpr void __cordl_internal_set_result(U  value) ;

/// @brief Method <>m__0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline U __m__0(::System::Threading::Tasks::Task*  completedTask) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Util__MapResult_c__AnonStorey1_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Util__MapResult_c__AnonStorey1_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Util__MapResult_c__AnonStorey1_1(Util__MapResult_c__AnonStorey1_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Util__MapResult_c__AnonStorey1_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Util__MapResult_c__AnonStorey1_1(Util__MapResult_c__AnonStorey1_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11134};

/// @brief Field result, offset: 0x10, size: 0x8, def value: None
 U  ___result;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Firebase::Firestore::Internal
// Dependencies System.Object
namespace Firebase::Firestore::Internal {
// Is value type: false
// CS Name: Firebase.Firestore.Internal.Util
class CORDL_TYPE Util : public ::System::Object {
public:
// Declarations
template<typename T,typename U>
using _MapResult_c__AnonStorey0_2 = ::Firebase::Firestore::Internal::Util__MapResult_c__AnonStorey0_2<T, U>;

template<typename U>
using _MapResult_c__AnonStorey1_1 = ::Firebase::Firestore::Internal::Util__MapResult_c__AnonStorey1_1<U>;

/// @brief Method FlattenAndThrowException, addr 0x190dc00, size 0xb8, virtual false, abstract: false, final false
static inline void FlattenAndThrowException(::System::Threading::Tasks::Task*  completedTask) ;

/// @brief Method FlattenException, addr 0x190dcb8, size 0xa8, virtual false, abstract: false, final false
static inline ::System::Exception* FlattenException(::System::AggregateException*  aggregateException) ;

/// @brief Method HardAssert, addr 0x190dbfc, size 0x4, virtual false, abstract: false, final false
static inline void HardAssert(bool  condition, ::StringW  message) ;

/// @brief Method MapResult, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename U>
static inline ::System::Threading::Tasks::Task_1<U>* MapResult(::System::Threading::Tasks::Task*  task, U  result) ;

/// @brief Method MapResult, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T,typename U>
static inline ::System::Threading::Tasks::Task_1<U>* MapResult(::System::Threading::Tasks::Task_1<T>*  task, ::System::Func_2<T,U>*  mapFunc) ;

/// @brief Method NotNull, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline T NotNull(T  obj, ::StringW  message) ;

/// @brief Method OnPInvokeManagedException, addr 0x190ddc8, size 0xcc, virtual false, abstract: false, final false
static inline void OnPInvokeManagedException(::System::Exception*  exception, ::StringW  methodName) ;

/// @brief Method Unreachable, addr 0x190dbf8, size 0x4, virtual false, abstract: false, final false
static inline void Unreachable() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Util() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Util", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Util(Util && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Util", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Util(Util const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11135};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Firebase::Firestore::Internal::Util, 0x10>, "Size mismatch!");

} // namespace end def Firebase::Firestore::Internal
NEED_NO_BOX(::Firebase::Firestore::Internal::Util);
DEFINE_IL2CPP_ARG_TYPE(::Firebase::Firestore::Internal::Util*, "Firebase.Firestore.Internal", "Util");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Firebase::Firestore::Internal::Util__MapResult_c__AnonStorey0_2, "Firebase.Firestore.Internal", "Util/<MapResult>c__AnonStorey0`2");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Firebase::Firestore::Internal::Util__MapResult_c__AnonStorey1_1, "Firebase.Firestore.Internal", "Util/<MapResult>c__AnonStorey1`1");
