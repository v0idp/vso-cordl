#pragma once
// IWYU pragma private; include "System/Threading/Interlocked.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Interlocked)
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Threading {
class Interlocked;
}
// Write type traits
MARK_REF_PTR_T(::System::Threading::Interlocked);
// Dependencies System.Object
namespace System::Threading {
// Is value type: false
// CS Name: System.Threading.Interlocked
class CORDL_TYPE Interlocked : public ::System::Object {
public:
// Declarations
/// @brief Method Add, addr 0x27b4dc8, size 0x4, virtual false, abstract: false, final false
static inline int32_t Add(::ByRef<int32_t>  location1, int32_t  value) ;

/// @brief Method CompareExchange, addr 0x27b4db0, size 0x4, virtual false, abstract: false, final false
static inline ::System::IntPtr CompareExchange(::ByRef<::System::IntPtr>  location1, ::System::IntPtr  value, ::System::IntPtr  comparand) ;

/// @brief Method CompareExchange, addr 0x27b4d40, size 0x2c, virtual false, abstract: false, final false
static inline ::System::Object* CompareExchange(::ByRef<::System::Object*>  location1, ::System::Object*  value, ::System::Object*  comparand) ;

/// @brief Method CompareExchange, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline T CompareExchange(::ByRef<T>  location1, T  value, T  comparand) ;

/// @brief Method CompareExchange, addr 0x27b4db4, size 0x4, virtual false, abstract: false, final false
static inline double_t CompareExchange(::ByRef<double_t>  location1, double_t  value, double_t  comparand) ;

/// @brief Method CompareExchange, addr 0x27b4d6c, size 0x4, virtual false, abstract: false, final false
static inline float_t CompareExchange(::ByRef<float_t>  location1, float_t  value, float_t  comparand) ;

/// @brief Method CompareExchange, addr 0x27b4d34, size 0x4, virtual false, abstract: false, final false
static inline int32_t CompareExchange(::ByRef<int32_t>  location1, int32_t  value, int32_t  comparand) ;

/// @brief Method CompareExchange, addr 0x27b4d38, size 0x4, virtual false, abstract: false, final false
static inline int32_t CompareExchange(::ByRef<int32_t>  location1, int32_t  value, int32_t  comparand, ::ByRef<bool>  succeeded) ;

/// @brief Method CompareExchange, addr 0x27b4dac, size 0x4, virtual false, abstract: false, final false
static inline int64_t CompareExchange(::ByRef<int64_t>  location1, int64_t  value, int64_t  comparand) ;

/// @brief Method CompareExchange, addr 0x27b4d3c, size 0x4, virtual false, abstract: false, final false
static inline void CompareExchange(::ByRef<::System::Object*>  location1, ::ByRef<::System::Object*>  value, ::ByRef<::System::Object*>  comparand, ::ByRef<::System::Object*>  result) ;

/// @brief Method Decrement, addr 0x27b4d70, size 0x4, virtual false, abstract: false, final false
static inline int32_t Decrement(::ByRef<int32_t>  location) ;

/// @brief Method Exchange, addr 0x27b4dbc, size 0x4, virtual false, abstract: false, final false
static inline ::System::IntPtr Exchange(::ByRef<::System::IntPtr>  location1, ::System::IntPtr  value) ;

/// @brief Method Exchange, addr 0x27b4d84, size 0x24, virtual false, abstract: false, final false
static inline ::System::Object* Exchange(::ByRef<::System::Object*>  location1, ::System::Object*  value) ;

/// @brief Method Exchange, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline T Exchange(::ByRef<T>  location1, T  value) ;

/// @brief Method Exchange, addr 0x27b4dc0, size 0x4, virtual false, abstract: false, final false
static inline double_t Exchange(::ByRef<double_t>  location1, double_t  value) ;

/// @brief Method Exchange, addr 0x27b4da8, size 0x4, virtual false, abstract: false, final false
static inline float_t Exchange(::ByRef<float_t>  location1, float_t  value) ;

/// @brief Method Exchange, addr 0x27b4d7c, size 0x4, virtual false, abstract: false, final false
static inline int32_t Exchange(::ByRef<int32_t>  location1, int32_t  value) ;

/// @brief Method Exchange, addr 0x27b4db8, size 0x4, virtual false, abstract: false, final false
static inline int64_t Exchange(::ByRef<int64_t>  location1, int64_t  value) ;

/// @brief Method Exchange, addr 0x27b4d80, size 0x4, virtual false, abstract: false, final false
static inline void Exchange(::ByRef<::System::Object*>  location1, ::ByRef<::System::Object*>  value, ::ByRef<::System::Object*>  result) ;

/// @brief Method Increment, addr 0x27b4d74, size 0x4, virtual false, abstract: false, final false
static inline int32_t Increment(::ByRef<int32_t>  location) ;

/// @brief Method Increment, addr 0x27b4d78, size 0x4, virtual false, abstract: false, final false
static inline int64_t Increment(::ByRef<int64_t>  location) ;

/// @brief Method MemoryBarrier, addr 0x27b4dcc, size 0x8, virtual false, abstract: false, final false
static inline void MemoryBarrier() ;

/// @brief Method Read, addr 0x27b4dc4, size 0x4, virtual false, abstract: false, final false
static inline int64_t Read(::ByRef<int64_t>  location) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Interlocked() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Interlocked", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Interlocked(Interlocked && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Interlocked", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Interlocked(Interlocked const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2445};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Threading::Interlocked, 0x10>, "Size mismatch!");

} // namespace end def System::Threading
NEED_NO_BOX(::System::Threading::Interlocked);
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::Interlocked*, "System.Threading", "Interlocked");
