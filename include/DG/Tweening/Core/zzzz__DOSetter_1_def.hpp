#pragma once
// IWYU pragma private; include "DG/Tweening/Core/DOSetter_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
CORDL_MODULE_EXPORT(DOSetter_1)
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
// Forward declare root types
namespace DG::Tweening::Core {
template<typename T>
class DOSetter_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::DG::Tweening::Core::DOSetter_1);
// Dependencies System.MulticastDelegate
namespace DG::Tweening::Core {
// cpp template
template<typename T>
// Is value type: false
// CS Name: DG.Tweening.Core.DOSetter`1<T>
class CORDL_TYPE DOSetter_1 : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(T  pNewValue, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Invoke(T  pNewValue) ;

static inline ::DG::Tweening::Core::DOSetter_1<T>* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DOSetter_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DOSetter_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DOSetter_1(DOSetter_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DOSetter_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DOSetter_1(DOSetter_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10834};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def DG::Tweening::Core
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::DG::Tweening::Core::DOSetter_1, "DG.Tweening.Core", "DOSetter`1");
