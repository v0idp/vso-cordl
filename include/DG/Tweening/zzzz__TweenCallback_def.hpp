#pragma once
// IWYU pragma private; include "DG/Tweening/TweenCallback.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
CORDL_MODULE_EXPORT(TweenCallback)
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
namespace DG::Tweening {
class TweenCallback;
}
// Write type traits
MARK_REF_PTR_T(::DG::Tweening::TweenCallback);
// Dependencies System.MulticastDelegate
namespace DG::Tweening {
// Is value type: false
// CS Name: DG.Tweening.TweenCallback
class CORDL_TYPE TweenCallback : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x18c19b0, size 0x20, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x18c19d0, size 0xc, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x18c199c, size 0x14, virtual true, abstract: false, final false
inline void Invoke() ;

static inline ::DG::Tweening::TweenCallback* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x18c1914, size 0x88, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TweenCallback() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TweenCallback", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TweenCallback(TweenCallback && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TweenCallback", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TweenCallback(TweenCallback const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10686};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::DG::Tweening::TweenCallback, 0x80>, "Size mismatch!");

} // namespace end def DG::Tweening
NEED_NO_BOX(::DG::Tweening::TweenCallback);
DEFINE_IL2CPP_ARG_TYPE(::DG::Tweening::TweenCallback*, "DG.Tweening", "TweenCallback");
