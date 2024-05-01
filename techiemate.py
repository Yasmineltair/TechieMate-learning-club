irom flask import Flask, render_template

TechieMate_app = Flask(__name__)


@TechieMate_app.route("/")
def home():
    return render_template("landing.html", title="Homepage", custom_css="landing")

@TechieMate_app.route("/login")
def login():
    return render_template("login.html", title="Login", custom_css="login")

@TechieMate_app.route("/sign_up")
def create_user():
    return render_template("sign-up.html", title="Sign up", custom_css="login")


@TechieMate_app.route("/roadmaps")
def get_all_roadmaps():
    return render_template("roadmaps.html", title="roadmaps", custom_css="roadmaps")

@TechieMate_app.route("/roadmaps/web_devop")
def get_single_roadmap():
    return render_template("web_devop.html", title="web_developement", custom_css="web_devop")


@TechieMate_app.route("/roadmaps/web_devop/full_stack")
def enroll_in_roadmap():
    return render_template("full_stack.html", title="full_stack", custom_css="full_stack")

@TechieMate_app.route("/messages")
def messages():
    return render_template("messages.html", title="Messages", custom_css="messages")

@TechieMate_app.route("/community")
def community():
    return render_template("all_community.html", title="Community", custom_css="all_community")

@TechieMate_app.route("/about")
def about():
    return render_template("about.html", title="About", custom_css="about")

@TechieMate_app.route("/contact_us")
def contact_us():
    return render_template("contact_us.html", title="Contact_us", custom_css="contact_us")

if __name__ == "__main__":
    TechieMate_app.run(debug=True, port=9000)
