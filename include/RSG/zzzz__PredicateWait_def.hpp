#pragma once
// IWYU pragma private; include "RSG/PredicateWait.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "RSG/zzzz__TimeData_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(PredicateWait)
namespace RSG {
class IPendingPromise;
}
namespace RSG {
struct TimeData;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
// Forward declare root types
namespace RSG {
class PredicateWait;
}
// Write type traits
MARK_REF_PTR_T(::RSG::PredicateWait);
// Dependencies RSG.TimeData, System.Object
namespace RSG {
// Is value type: false
// CS Name: RSG.PredicateWait
class CORDL_TYPE PredicateWait : public ::System::Object {
public:
// Declarations
/// @brief Field frameStarted, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_frameStarted, put=__cordl_internal_set_frameStarted)) int32_t  frameStarted;

/// @brief Field pendingPromise, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_pendingPromise, put=__cordl_internal_set_pendingPromise)) ::RSG::IPendingPromise*  pendingPromise;

/// @brief Field predicate, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_predicate, put=__cordl_internal_set_predicate)) ::System::Func_2<::RSG::TimeData,bool>*  predicate;

/// @brief Field timeData, offset 0x28, size 0xc 
 __declspec(property(get=__cordl_internal_get_timeData, put=__cordl_internal_set_timeData)) ::RSG::TimeData  timeData;

/// @brief Field timeStarted, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_timeStarted, put=__cordl_internal_set_timeStarted)) float_t  timeStarted;

static inline ::RSG::PredicateWait* New_ctor() ;

constexpr int32_t const& __cordl_internal_get_frameStarted() const;

constexpr int32_t& __cordl_internal_get_frameStarted() ;

constexpr ::RSG::IPendingPromise* const& __cordl_internal_get_pendingPromise() const;

constexpr ::RSG::IPendingPromise*& __cordl_internal_get_pendingPromise() ;

constexpr ::System::Func_2<::RSG::TimeData,bool>* const& __cordl_internal_get_predicate() const;

constexpr ::System::Func_2<::RSG::TimeData,bool>*& __cordl_internal_get_predicate() ;

constexpr ::RSG::TimeData const& __cordl_internal_get_timeData() const;

constexpr ::RSG::TimeData& __cordl_internal_get_timeData() ;

constexpr float_t const& __cordl_internal_get_timeStarted() const;

constexpr float_t& __cordl_internal_get_timeStarted() ;

constexpr void __cordl_internal_set_frameStarted(int32_t  value) ;

constexpr void __cordl_internal_set_pendingPromise(::RSG::IPendingPromise*  value) ;

constexpr void __cordl_internal_set_predicate(::System::Func_2<::RSG::TimeData,bool>*  value) ;

constexpr void __cordl_internal_set_timeData(::RSG::TimeData  value) ;

constexpr void __cordl_internal_set_timeStarted(float_t  value) ;

/// @brief Method .ctor, addr 0x17f2fb8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PredicateWait() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PredicateWait", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PredicateWait(PredicateWait && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PredicateWait", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PredicateWait(PredicateWait const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1689};

/// @brief Field predicate, offset: 0x10, size: 0x8, def value: None
 ::System::Func_2<::RSG::TimeData,bool>*  ___predicate;

/// @brief Field timeStarted, offset: 0x18, size: 0x4, def value: None
 float_t  ___timeStarted;

/// @brief Field pendingPromise, offset: 0x20, size: 0x8, def value: None
 ::RSG::IPendingPromise*  ___pendingPromise;

/// @brief Field timeData, offset: 0x28, size: 0xc, def value: None
 ::RSG::TimeData  ___timeData;

/// @brief Field frameStarted, offset: 0x34, size: 0x4, def value: None
 int32_t  ___frameStarted;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::RSG::PredicateWait, ___predicate) == 0x10, "Offset mismatch!");

static_assert(offsetof(::RSG::PredicateWait, ___timeStarted) == 0x18, "Offset mismatch!");

static_assert(offsetof(::RSG::PredicateWait, ___pendingPromise) == 0x20, "Offset mismatch!");

static_assert(offsetof(::RSG::PredicateWait, ___timeData) == 0x28, "Offset mismatch!");

static_assert(offsetof(::RSG::PredicateWait, ___frameStarted) == 0x34, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::RSG::PredicateWait, 0x38>, "Size mismatch!");

} // namespace end def RSG
NEED_NO_BOX(::RSG::PredicateWait);
DEFINE_IL2CPP_ARG_TYPE(::RSG::PredicateWait*, "RSG", "PredicateWait");
