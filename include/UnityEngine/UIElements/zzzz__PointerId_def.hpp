#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/PointerId.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PointerId)
// Forward declare root types
namespace UnityEngine::UIElements {
class PointerId;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::PointerId);
// Dependencies System.Object
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.PointerId
class CORDL_TYPE PointerId : public ::System::Object {
public:
// Declarations
/// @brief Field hoveringPointers, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_hoveringPointers, put=setStaticF_hoveringPointers)) ::ArrayW<int32_t,::Array<int32_t>*>  hoveringPointers;

/// @brief Field invalidPointerId, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_invalidPointerId, put=setStaticF_invalidPointerId)) int32_t  invalidPointerId;

/// @brief Field maxPointers, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_maxPointers, put=setStaticF_maxPointers)) int32_t  maxPointers;

/// @brief Field mousePointerId, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_mousePointerId, put=setStaticF_mousePointerId)) int32_t  mousePointerId;

/// @brief Field penPointerCount, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_penPointerCount, put=setStaticF_penPointerCount)) int32_t  penPointerCount;

/// @brief Field penPointerIdBase, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_penPointerIdBase, put=setStaticF_penPointerIdBase)) int32_t  penPointerIdBase;

/// @brief Field touchPointerCount, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_touchPointerCount, put=setStaticF_touchPointerCount)) int32_t  touchPointerCount;

/// @brief Field touchPointerIdBase, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_touchPointerIdBase, put=setStaticF_touchPointerIdBase)) int32_t  touchPointerIdBase;

static inline ::ArrayW<int32_t,::Array<int32_t>*> getStaticF_hoveringPointers() ;

static inline int32_t getStaticF_invalidPointerId() ;

static inline int32_t getStaticF_maxPointers() ;

static inline int32_t getStaticF_mousePointerId() ;

static inline int32_t getStaticF_penPointerCount() ;

static inline int32_t getStaticF_penPointerIdBase() ;

static inline int32_t getStaticF_touchPointerCount() ;

static inline int32_t getStaticF_touchPointerIdBase() ;

static inline void setStaticF_hoveringPointers(::ArrayW<int32_t,::Array<int32_t>*>  value) ;

static inline void setStaticF_invalidPointerId(int32_t  value) ;

static inline void setStaticF_maxPointers(int32_t  value) ;

static inline void setStaticF_mousePointerId(int32_t  value) ;

static inline void setStaticF_penPointerCount(int32_t  value) ;

static inline void setStaticF_penPointerIdBase(int32_t  value) ;

static inline void setStaticF_touchPointerCount(int32_t  value) ;

static inline void setStaticF_touchPointerIdBase(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PointerId() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PointerId", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PointerId(PointerId && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PointerId", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PointerId(PointerId const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4087};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::PointerId, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::PointerId);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::PointerId*, "UnityEngine.UIElements", "PointerId");
