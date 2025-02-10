#pragma once
// IWYU pragma private; include "VROSC/VideoButton.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "VROSC/zzzz__PaginatedListItemUI_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(VideoButton)
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace TMPro {
class TextMeshPro;
}
namespace UnityEngine::Networking {
class UnityWebRequest;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class MeshRenderer;
}
namespace UnityEngine {
class Texture;
}
namespace VROSC {
class InputDevice;
}
namespace VROSC {
class PaginatedListDataHolder;
}
namespace VROSC {
class PaginatedList;
}
namespace VROSC {
struct VideoButton__DownloadThumbnail_d__5;
}
namespace VROSC {
class VideoInfo;
}
// Forward declare root types
namespace VROSC {
class VideoButton;
}
namespace VROSC {
struct VideoButton__DownloadThumbnail_d__5;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::VideoButton);
MARK_VAL_T(::VROSC::VideoButton__DownloadThumbnail_d__5);
// Dependencies System.Runtime.CompilerServices.AsyncVoidMethodBuilder, System.Runtime.CompilerServices.IAsyncStateMachine, System.Runtime.CompilerServices.TaskAwaiter
namespace VROSC {
// Is value type: true
// CS Name: VROSC.VideoButton/<DownloadThumbnail>d__5
struct CORDL_TYPE VideoButton__DownloadThumbnail_d__5 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x177bf28, size 0x550, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x177c478, size 0xc, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr VideoButton__DownloadThumbnail_d__5() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "videoInfo", ty: "::VROSC::VideoInfo*", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::UnityW<::VROSC::VideoButton>", modifiers: "", def_value: None }, CppParam { name: "_request_5__2", ty: "::UnityEngine::Networking::UnityWebRequest*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
constexpr VideoButton__DownloadThumbnail_d__5(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::VROSC::VideoInfo*  videoInfo, ::UnityW<::VROSC::VideoButton>  __4__this, ::UnityEngine::Networking::UnityWebRequest*  _request_5__2, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1292};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x48};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
 ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder;

/// @brief Field videoInfo, offset: 0x28, size: 0x8, def value: None
 ::VROSC::VideoInfo*  videoInfo;

/// @brief Field <>4__this, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::VROSC::VideoButton>  __4__this;

/// @brief Field <request>5__2, offset: 0x38, size: 0x8, def value: None
 ::UnityEngine::Networking::UnityWebRequest*  _request_5__2;

/// @brief Field <>u__1, offset: 0x40, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::VROSC::VideoButton__DownloadThumbnail_d__5, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::VROSC::VideoButton__DownloadThumbnail_d__5, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::VROSC::VideoButton__DownloadThumbnail_d__5, videoInfo) == 0x28, "Offset mismatch!");

static_assert(offsetof(::VROSC::VideoButton__DownloadThumbnail_d__5, __4__this) == 0x30, "Offset mismatch!");

static_assert(offsetof(::VROSC::VideoButton__DownloadThumbnail_d__5, _request_5__2) == 0x38, "Offset mismatch!");

static_assert(offsetof(::VROSC::VideoButton__DownloadThumbnail_d__5, __u__1) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::VideoButton__DownloadThumbnail_d__5, 0x48>, "Size mismatch!");

} // namespace end def VROSC
// Dependencies VROSC.PaginatedListItemUI
namespace VROSC {
// Is value type: false
// CS Name: VROSC.VideoButton
class CORDL_TYPE VideoButton : public ::VROSC::PaginatedListItemUI {
public:
// Declarations
using _DownloadThumbnail_d__5 = ::VROSC::VideoButton__DownloadThumbnail_d__5;

/// @brief Field _playIcon, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__playIcon, put=__cordl_internal_set__playIcon)) ::UnityW<::UnityEngine::GameObject>  _playIcon;

/// @brief Field _thumbnailMesh, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__thumbnailMesh, put=__cordl_internal_set__thumbnailMesh)) ::UnityW<::UnityEngine::MeshRenderer>  _thumbnailMesh;

/// @brief Field _titleUI, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__titleUI, put=__cordl_internal_set__titleUI)) ::UnityW<::TMPro::TextMeshPro>  _titleUI;

/// @brief Method DownloadThumbnail, addr 0x177be30, size 0x9c, virtual false, abstract: false, final false
inline void DownloadThumbnail(::VROSC::VideoInfo*  videoInfo) ;

static inline ::VROSC::VideoButton* New_ctor() ;

/// @brief Method SetNewData, addr 0x177bd24, size 0x10c, virtual true, abstract: false, final false
inline void SetNewData(::VROSC::PaginatedListDataHolder*  dataholder) ;

/// @brief Method SetThumbnail, addr 0x177becc, size 0x30, virtual false, abstract: false, final false
inline void SetThumbnail(::UnityEngine::Texture*  thumbnail) ;

/// @brief Method Setup, addr 0x177bc30, size 0xf4, virtual true, abstract: false, final false
inline void Setup(::VROSC::PaginatedList*  paginatedList) ;

/// @brief Method Toggled, addr 0x177befc, size 0x24, virtual false, abstract: false, final false
inline void Toggled(::VROSC::InputDevice*  inputDevice, bool  toggledOn) ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__playIcon() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__playIcon() ;

constexpr ::UnityW<::UnityEngine::MeshRenderer> const& __cordl_internal_get__thumbnailMesh() const;

constexpr ::UnityW<::UnityEngine::MeshRenderer>& __cordl_internal_get__thumbnailMesh() ;

constexpr ::UnityW<::TMPro::TextMeshPro> const& __cordl_internal_get__titleUI() const;

constexpr ::UnityW<::TMPro::TextMeshPro>& __cordl_internal_get__titleUI() ;

constexpr void __cordl_internal_set__playIcon(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set__thumbnailMesh(::UnityW<::UnityEngine::MeshRenderer>  value) ;

constexpr void __cordl_internal_set__titleUI(::UnityW<::TMPro::TextMeshPro>  value) ;

/// @brief Method .ctor, addr 0x177bf20, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VideoButton() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VideoButton", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
VideoButton(VideoButton && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VideoButton", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
VideoButton(VideoButton const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1293};

/// @brief Field _thumbnailMesh, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::MeshRenderer>  ____thumbnailMesh;

/// @brief Field _titleUI, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::TMPro::TextMeshPro>  ____titleUI;

/// @brief Field _playIcon, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____playIcon;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::VideoButton, ____thumbnailMesh) == 0x48, "Offset mismatch!");

static_assert(offsetof(::VROSC::VideoButton, ____titleUI) == 0x50, "Offset mismatch!");

static_assert(offsetof(::VROSC::VideoButton, ____playIcon) == 0x58, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::VideoButton, 0x60>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::VideoButton);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::VideoButton*, "VROSC", "VideoButton");
DEFINE_IL2CPP_ARG_TYPE(::VROSC::VideoButton__DownloadThumbnail_d__5, "VROSC", "VideoButton/<DownloadThumbnail>d__5");
